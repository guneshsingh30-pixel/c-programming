#include<stdio.h>
int ls(int a[],int n,int k){
    if(n==0)
    return 0;
    if(a[n-1]==k)
    return 1;
    return ls(a,n-1,k);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int k;
    printf("enter value to be searched");
    scanf("%d",&k);
    if(ls(a,n,k)==1)
    printf("Present");
    else
    printf("Not present");
   }