#include<stdio.h>
int main()
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    t=(a==b && a==c)?printf("Equialteral"):((a!=b && b!=c && c!=a)? printf("scalene"):printf("isoscels") );
    printf("%d",t);
    return 0;
}
