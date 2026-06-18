#include<stdio.h>
int main(){
    int s,a,b;
    scanf("%d %d",&a,&b);
    for (s=a;s<=b;s++)
    {
        int x,y,z,p,n;
    n=s;
    x=n%10;
    n=n/10;
    y=n%10;
    n=n/10;
    z=n%10;
    p=x*100+y*10+z;
    if (s==p)
        printf("%d\n",p);

    }
    return 0;
}