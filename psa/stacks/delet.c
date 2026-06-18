#include<stdio.h>

int stack[5];
int stack[5]={10,20,30};
int top=2;
void pop(){
    if(top==1){
        printf("Stack underflow\n");
    }
    else
    {printf("%d\n",stack[top]);
        top--;
    }
}
int main(){
    pop();
    
}