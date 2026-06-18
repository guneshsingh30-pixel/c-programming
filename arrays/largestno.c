#include<stdio.h>
int main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int j=0;j<=n-1;j++){
        if (max<a[j])
        max=a[j];
    }
    printf("%d",max);
    return 0;
   
}