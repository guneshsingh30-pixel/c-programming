#include<stdio.h>
int main(){
    int m1,n1;
    scanf("%d %d",&m1, &n1);
    int m2,n2;
    scanf("%d %d",&m2 ,&n2);
    int a[m1][n1],b[m2][n2];
    if(n1!=m2){
        printf("Not possible");
        return 0;
    }
    else{
        printf("Enter matrix A\n");
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n1-1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    }
    printf("Enter matrix B\n");
    for(int i=0;i<=m2-1;i++){
        for(int j=0;j<=n2-1;j++){
            scanf("%d",&b[i][j]);
        }
    }
    int c[m1][n2];
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n2-1;j++){
            int sum=0;
            for(int k=0;k<=n1-1;k++)
            {sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
    }
    for(int i=0;i<=m1-1;i++){
        for(int j=0;j<=n2-1;j++){
            printf("%d    ",c[i][j]);
        }
        printf("\n");
    }
}