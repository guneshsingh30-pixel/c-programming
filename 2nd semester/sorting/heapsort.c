#include<stdio.h>
void heapify(int a[],int n,int i){
    int l=2*i+1;
    int r=2*i+2;
    int max=i;
    if(l<=n-1 && a[l]>a[max])
    max=l;
    if(r<=n-1 && a[r]>a[max])
    max=r;
    if(max!=i){
        int t=a[max];
        a[max]=a[i];
        a[i]=t;
        heapify(a,n,max);
    }
}
void heapsort(int a[],int n){
    for(int i=n/2;i>=0;i--){
        heapify(a,n,i);
    }
    for(int i=n-1;i>=1;i--){
        int t=a[0];
        a[0]=a[i];
        a[i]=t;
        n=n-1;
        heapify(a,n,0);
    }
}
int main(){
    int arr[]={2,3,4,31,1,3,2,131,12,23,122};
    int n=sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}