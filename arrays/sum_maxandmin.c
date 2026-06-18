#include<stdio.h>
int mini(int n,int a[]){
    int min=a[0];
    for(int j=0;j<=n-1;j++){
        if(min>a[j])
        min=a[j];
    }
    int max=a[0];
    for (int j=0;j<=n-1;j++){
        if (max<a[j])
        max=a[j];
    }
    int sum=max+min;
    return sum;}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("%d",mini(n,a));
    return 0;
}