#include<stdio.h>
int ls(int a[],int n,int key){
    for(int i=0;i<=n-1;i++)
    {if (a[i]==key)
    return 1;}
    return 0;
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
    int f=ls(a,n,k);
    if(f==1)
    printf("Present");
    else
    printf("Not present");
    return 0;
}