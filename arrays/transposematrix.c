#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter matrix A\n");
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
            scanf("%d",&a[i][j]);
        }
    } 
    int b[n][m];
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=m-1;j++){
            b[i][j]=a[j][i];
        }
    }
    printf("matrix a\n");
    for(int i=0;i<=m-1;i++)
    {
        for(int j=0;j<=n-1;j++){
            printf("%d ",a[i][j]);
            
         
}
printf("\n");
}
printf("Matrix b\n");
for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=m-1;j++){
            printf("%d ",b[i][j]);
         
}
printf("\n");
}
return 0;}