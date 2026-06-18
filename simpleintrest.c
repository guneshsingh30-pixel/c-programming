#include<stdio.h>
int main()
{
    float p,r,t;
    printf("enter the principal amount ,rate, time :");
    scanf("%f %f %f",&p,&r,&t);
    double si;
    si=(p*r*t)/100;
    printf("simple intrest: %.2lf",si);
    return 0;

}