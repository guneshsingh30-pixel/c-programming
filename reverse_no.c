#include<stdio.h>
int main()
{
    int a;
    printf("enter three digit number;");
    scanf("%d",&a);
    int x,y,z , intrev;
    x=a%10;
    a=a/10;
    y=a%10;
    a=a/10;
    z=a%10;
    intrev=x*100+y*10+z;
    printf("the reverse no is: %d",intrev);
    return 0;
}