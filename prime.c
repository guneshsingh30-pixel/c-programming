#include<stdio.h>
int main(){
    int n;
    int fact=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        if (n%i==0)
            fact+=1;

    }
    if (fact==2)
    printf("prime");
    else
    printf("Not prime");
    return 0;
}