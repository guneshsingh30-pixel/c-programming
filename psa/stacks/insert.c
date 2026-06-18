#include<stdio.h>

int stack[5];
int top=-1;
    int size=5;
    void push(int n){
        if(top==size-1){
            printf("Stack overflow\n");
        }
        else{
            top++;
            stack[top]=n;
            printf("%d\n",n);
        }

    }
    int main(){
        push(10);
        push(20);
        push(30);
        push(10);
        push(20);
        push(30);
    }