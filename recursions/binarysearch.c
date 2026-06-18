#include<stdio.h>
int bs(int a[],int l,int r,int key){
    
    if(l>r)
    return 0;
    int mid=(l+r)/2;
    if(a[mid]==key)
    return 1;
    else if(a[mid]>key)
    return bs(a,l,mid-1,key);
    else
    return bs(a,mid+1,r,key);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int k;
    int l=0,r=n-1;
    printf("enter value to be searched");
    scanf("%d",&k);
    int f=bs(a,l,r,k);
    if(f==1)
    printf("Present");
    else
    printf("Not present");
    return 0;}