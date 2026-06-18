#include<stdio.h>
int prime(int a){
    if(a<=1)
    return 0;
    for (int i=2;i<=a/2;i++){
        if (a%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int x,y;
    scanf("%d",&x);
    for (y=2;y<=(x/2);y++){
        if(prime(y)&&prime(x-y)){
            printf("%d = %d + %d \n",x,y,x-y);
        }
    }
}