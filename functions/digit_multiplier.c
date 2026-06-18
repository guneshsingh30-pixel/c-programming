#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int dgt(int n){
int rev=0;
    int temp=n;
while(temp!=0)
{
    int digit=temp%10;
    rev=rev*10+digit;
    temp/=10;}
    if (n%rev==0)
        return 1;
    else
        return 0;

    
}
int main() {

    int a;
    scanf("%d",&a);
    int d=dgt(a);
    if(d==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
