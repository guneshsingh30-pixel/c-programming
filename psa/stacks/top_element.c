#include<stdio.h>

int stack[5];
int stack[5]={10,20,30};
int top=2;
void peek(){
    if(top==-1){
        printf("Stack is empty\n");

    }
    else
    {
        printf("%d\n",stack[top]);

    }
}
int main(){
    peek();
}