/*#include<stdio.h>
int isfactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;}
    return fact;
}
int ncr(int n,int r){
    return isfactorial(n)/(isfactorial(r)*isfactorial(n-r));
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<=n-i;i++){
        for(int k=1;k<=n-1-i;k++)
        printf(" ");
        for (int j=0;j<=i;j++)
            printf("%d ",ncr(i,j));
        
        printf("\n");
    }
    return 0;
}

*/
#include<stdio.h>
int isfactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;}
    return fact;
}
int ncr(int n,int r){
    return isfactorial(n)/(isfactorial(r)*isfactorial(n-r));
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<=n-1;i++){
        for(int k=1;k<=n-1-i;k++)
        printf(" ");
        for (int j=0;j<=i;j++)
            printf("%d ",ncr(i,j));
        printf("\n");}
    
    return 0;
}
