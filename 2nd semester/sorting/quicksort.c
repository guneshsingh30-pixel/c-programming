#include<stdio.h>
int partition(int a[],int st,int end){
int idx=st-1,pivot=a[end];
for(int i=st;i<end;i++){
    if(a[i]<=pivot){
        idx++;
        int t=a[i];
        a[i]=a[idx];
        a[idx]=t;
    }
}
idx++;
int tem=a[end];
a[end]=a[idx];
a[idx]=tem;
return idx;
}
void qs(int a[],int st,int end){
if(st<end){
    int pivindx=partition(a,st,end);
    qs(a,st,pivindx-1);//left half
    qs(a,pivindx+1,end);//right half
}
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    int st=0;
    int end=n-1;
    qs(a,st,end);
for(int i=0;i<=n-1;i++){
        printf("%d ",a[i]);
    }
}