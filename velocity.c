#include<stdio.h>
int main()
{
    float v,u,a,t;
    printf("Enter the initial velocity:");
    scanf("%f",&u);
    printf("Enter the acceleration:");
    scanf("%f",&a);
    printf("Enter the time:");
    scanf("%f",&t);
    v=u+a*t;
    printf("The final velocity is: %.2f ", v);
    return 0;
}
