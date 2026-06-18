#include<stdio.h>
void fun(int arr[],int n){
    for (int i=0;i<=n-1;i++)
    printf("%d",arr[i]);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    fun(a,n);
    //for(int i=0;i<=n-1;i++)
   // printf("%d",a[i]);
}