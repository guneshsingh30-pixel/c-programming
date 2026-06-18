#include<stdio.h>
int power(int x,int n){
    if (n==0)
    return 1;
    else 
    return x*power(x,n-1);
}
int main(){
    int a=power(2,10);
    printf("%d",a);
}