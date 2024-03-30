#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.14159
double Vx,X;
double Vy,Y;
double R;
double delta_time,start_time=0,duration;
int main(){
    printf("enter position (x,y):");
    scanf("%lf%lf",&X,&Y);
    printf("enter velocity (x,y):");
    scanf("%lf%lf",&Vx,&Vy);
    printf("enter R:");
    scanf("%lf",&R);
    printf("enter the delta_time(sec):");
    scanf("%lf",&delta_time);
    printf("enter the duration(sec):");
    scanf("%lf",&duration);
    while (start_time<duration)
    {
        Vx=Vx-((4*pi*pi*X)/R*R*R)*delta_time;
        X=X+Vx*delta_time;
        Vy=Vy-((4*pi*pi*Y)/R*R*R)*delta_time;
        Y=Y+Vy*delta_time;
        start_time=start_time+delta_time;
        printf("(x,y)=(%lf,%lf)\n",X,Y);
        //printf("%lf, ",X);
    }
    return 0;
}

