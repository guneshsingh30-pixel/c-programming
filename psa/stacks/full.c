#include<stdio.h>
int stack[5];
int size=5;
int top=4;
void isfull(){
    if(top==size-1)
    printf("Stack is full");
    else
    printf("Not full");
}
int main(){
    isfull();
}