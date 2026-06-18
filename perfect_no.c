#include<stdio.h>
int main(){
    int n,a,b;

    scanf("%d %d",&a, &b);
    for (n=a;n<=b;n++)
    {int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if (sum==n)
    printf("%d\n",n);
}
    return 0;
}