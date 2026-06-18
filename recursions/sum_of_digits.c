#include<stdio.h>
int sum(int x){
    if(x==1)
    return 1;
    else
    return x+sum(x-1);

}
int main(){
    int a=sum(10);
    printf("%d",a);
}