#include<stdio.h>
#include<math.h>
int digits(int n){
    if(n==0)
    return 0;
    else
    return 1+digits(n/10);
}
int reverse(int n){
    if(n==0)
    return 0;
    else{
        int d=digits(n);
        return n%10*pow(10,d-1)+reverse(n/10);
    }
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",reverse(x));
}