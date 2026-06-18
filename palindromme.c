#include<stdio.h>
int main()
{
    int a,x,y,z,p,s;
    
    scanf("%d",&a);
    s=a;
    x=a%10;
    a=a/10;
    y=a%10;
    a=a/10;
    z=a%10;
    p=x*100+y*10+z;
    if (s==p)
        printf("palindrome");
    else
        printf("Not a palindrome");
    return 0;


}