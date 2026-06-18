#include<stdio.h>
int main()
{
    float pi, r,c,a;
    pi=3.14;
    printf("Enter the radius:");
    scanf("%f",&r);
    c=2*pi*r;
    a=pi*r*r;
    printf("Circumference of circle : %.2f",c);
    printf("area of circle : %.2f",a);
    return 0;
}
