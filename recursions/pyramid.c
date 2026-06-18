#include<stdio.h>
void fun(int n){
    if (n==0)
    return ;
    fun(n-1);
    printf("\n");
    for (int i=1;i<=n;i++){
        printf("%d",i);
    }
}
int main(){
    int x;
    scanf("%d",&x);
    fun(x);
}