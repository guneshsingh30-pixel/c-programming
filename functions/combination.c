#include<stdio.h>
int isfactorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;

    
    }
    return fact;
}
float ncr(float n,float r){
    return isfactorial(n)/(isfactorial(r)*isfactorial(n-r));
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    float x=ncr(a,b);
    printf("%f",x);
    return 0;
}