#include<stdio.h>
int main()
{
   int a,b,max;
   scanf("%d %d",&a,&b);
   //// if (a>b)
   ////     printf("%d",b);
   /// else
///printf("%d",a);
     
    max=a<b?a:b;
    printf("%d",max);
    return 0;
}