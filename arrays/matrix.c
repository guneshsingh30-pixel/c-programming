#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++){
            scanf("%d",&a[i][j]);
        }
        }
        for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++){
            printf("%d ",a[i][j]);
         
        }
        printf("\n");
    }
    return 0;
}