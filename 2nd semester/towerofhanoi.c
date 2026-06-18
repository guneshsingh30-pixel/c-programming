#include<stdio.h>
void hanoi(int n,char a,char b, char c){
    if(n==1)
   printf("%c->%c\n",a,b);
   else{
    hanoi(n-1,a,c,b);
    hanoi(1,a,b,c);
    hanoi(n-1,c,b,a);
   }
}
int main(){
    int n;
    scanf("%d",&n);
    hanoi(n,'a','b','c');
}