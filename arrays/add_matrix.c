#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n],b[m][n];
    printf("Enter matrix A\n");
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix B\n");
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m][n];
    for(int i=0;i<=m-1;i++){
        for(int k=0;k<=n-1;k++){
            c[i][k]=a[i][k]+b[i][k];     
        }
    }
    printf("\n");
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++){
            printf("%d ",c[i][j]);
         
}
        printf("\n");
    }
    return 0;
}