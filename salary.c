#include<stdio.h>
int main()
{
    float gs,bs,da,hra;
    printf("Enter the basic salary:");
    scanf("%f",&bs);
    da=(20.0/100.0)*bs;
    hra=(25.0/100.0)*bs;
    gs=da+hra+bs;
    printf("The gross salary is: %.4f", gs);
    return 0;
}