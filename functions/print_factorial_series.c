#include<stdio.h>
int isfactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    printf("%d ",fact);}
    return fact;    
}
int main(){
    int a;
    scanf("%d",&a);
    isfactorial(a);
    return 0;
}
