#include<stdio.h>
int bs(int a[],int n, int key){
    int l=0;
    int r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if (a[mid]==key)
        return 1;
        else if(a[mid]>key)
    r=mid-1;
    else
    l=mid+1;
}
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
    int f=bs(a,n,k);
    if(f==1)
    printf("Present");
    else
    printf("Not present");
    return 0;
}  