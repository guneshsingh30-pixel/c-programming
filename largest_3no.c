#include<stdio.h>
int main()
{
    int a,b,c,max;
    scanf("%d %d %d",&a,&b,&c);
   if (a<b && a<c)
  {
    printf("smallest number is %d",a);
    }
   else
   {
       if (b<c)
         printf("smallest number is %d",b);
 else
         printf("smallest number is %d",c);
    }
    max=(a>b && a>c)?a:(b>c?b:c);
    printf("\nlargest number is %d",max);
    return 0;
}