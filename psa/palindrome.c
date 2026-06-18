#include<stdio.h>
int reverse(int n){
int temp=n;
int rev=0;
while(temp>0){
    int digit=temp%10;
    rev=rev*10+digit;
    temp/=10;
}return rev;}
int palin(int n){
if (reverse(n)==n)
return 1;
else
return 0;}
int main(){
    int x;
    scanf("%d",&x);
    int l=x;
    for(int i=1; ;i++)
    {
        if(palin(l)==1){
            printf("%d ",i-1);
            printf("%d ",l);
            break;
        }
        else if(palin(l)==0)
        l+=reverse(l);
    }
}