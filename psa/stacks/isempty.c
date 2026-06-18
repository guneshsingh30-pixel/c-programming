#include<stdio.h>
int top=-1;
void isEmpty(){
    if (top==-1)
    printf("Stack is empty\n");
    else
    printf("Not empty");
}
int main(){
    isEmpty();
}