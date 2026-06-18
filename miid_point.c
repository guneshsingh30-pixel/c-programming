#include<stdio.h>
int  main()
{
    int a,b,c,d;
    scanf("%d %d",&a ,&b);
    scanf("%d %d",&c,&d);
    float m,n;
    m=(a+c)/2.0;
    n=(b+d)/2.0;
    printf("The cordinates are:%f %f",m,n);
    return 0;
}