#include<stdio.h>
#include<stdlib.h>
void ms(int a[],int st,int mid,int end){
    int i=st,j=mid+1,k=0;
    int temp[100];
    while(i<=mid && j<=end){
        if (a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=end){
        temp[k++]=a[j++];
    }
    for(i=st,k=0;i<=end;i++ , k++){
        a[i]=temp[k];
    }
}
void merge(int a[],int n,int st,int end){
    if(st>=end)
    return;
    int mid=(st+end)/2;
    merge(a,n,st,mid);
    merge(a,n,mid+1,end);
    ms(a,st,mid,end);
}
int main(){
    int n;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int st=0,end=n-1;
    merge(a,n,st,end);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }

}
