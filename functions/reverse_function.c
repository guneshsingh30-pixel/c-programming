#include<stdio.h>
int rev(int n){
    int temp=n;
    int reve=0;    
    while(temp>0){
        
        int digit=temp%10;
        reve=(reve*10)+digit;
        temp/=10;
        
    }
    return reve;}
int main(){
    int a;
    scanf("%d",&a);
    int r=rev(a);
    printf("%d",r);
    return 0;
}
