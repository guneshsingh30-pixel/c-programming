#include<stdio.h>
int main()
{
    int a,x,y,z;
    printf("enter the three numbers:");
    scanf("%d %d %d", &x , &y,&z);
    a=x;
    x=y;
    y=z;
    z=a;
    printf("after interchanging the values are: %d %d %d",x,y,z);
    return 0;
}