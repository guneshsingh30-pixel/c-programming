#include<stdio.h>
/*void rev(int a[],int n){
    int l=0,r=n-1;
    while(l<r){
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
        l++;
        r--;
    }
}*/
void rev(int a[],int n){
    int i,t;
    for(i=0;i<n/2;i++){
        t=a[n-1-i];
        a[n-1-i]=a[i];
        a[i]=t;}
    
}
int main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    rev(a,n);
    for (int j=0;j<=n-1;j++)
    {
        printf("%d   ",a[j]);
}
}