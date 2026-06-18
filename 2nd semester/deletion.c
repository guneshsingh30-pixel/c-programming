#include<stdio.h>
void deletion(int a[],int n,int pos)
{
    for(int i=pos-1;i<=n;i++){
        a[i]=a[i+1];
    }
}
int main()
{
    int a[100];
    int p,n;
    scanf("%d",&n);
    
    for(int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    
        scanf("%d",&p);
    deletion(a,n,p);

    
    for (int i=0;i<n-1;i++){
        printf("%d",a[i]);
    }
    return 0;

}
