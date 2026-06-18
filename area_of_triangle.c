#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float s;
    s=(a+b+c)/2.00;
    if (s>a && s>b && s>c)
    {   float h;
        h= sqrt(s* (s-a) * (s-b) * (s-c));
        printf("%f",h);
    }
    else
        printf("it is not a valid triangle");
    return 0;
    

}