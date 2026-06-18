#include<stdio.h>
int palin(int n){
int temp=n;
int rev=0;
while(temp>0){
    int digit=temp%10;
    rev=rev*10+digit;
    temp/=10;
}
if (rev==n)
return 1;
else
return 0;}
int main(){
    int a;
    scanf("%d",&a);
    
    if (palin(a))
    printf("Palin");
    else
    printf("No");
    return 0;}