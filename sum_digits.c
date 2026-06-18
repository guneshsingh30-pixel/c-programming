#include<stdio.h>
int main()
{
    int a;
    printf("enter three digit number;");
    scanf("%d",&a);
    int x,y,z,sum;
    x=a%10;
    a=a/10;
    y=a%10;
    a=a/10;
    z=a%10;
    sum=x+y+z;
    printf("The sum of the digits is: %d %d %d %d",sum);
    return 0;

}