#include<stdio.h>
void radisort(int a[],int n,int exp){
    int count[10]={0};
    int temp[n];
for(int i=0;i<n;i++){
        count[(a[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        int x=(a[i]/exp)%10;
        int y=count[x];
        temp[y-1]=a[i];
        count[x]--;
    }
for(int i=0;i<n;i++){
    a[i]=temp[i];
}}
    int main(){
        int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    for(int exp=1;max/exp>0;exp*=10)
    radisort(a,n,exp);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    }