#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int prime(int n){
    if(n<2)
    return 0;
    for(int i=2;i<=n;i++)
    if(n%i==0)
    return 1;
    return 0;
    
}
int three(int n){
    int root=sqrt(n);
    if(root*root==n && prime(root))
    return 1;
    return 0;
}
int main(){
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<=t-1;i++)
    {
        scanf("%d",&n);
        if (n==1)
        printf("Yes\n");
        else if(three(n))
        printf("Yes\n");
        else
        printf("NO\n");
    }
}