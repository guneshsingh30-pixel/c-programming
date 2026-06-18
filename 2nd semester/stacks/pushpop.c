#include<stdio.h>
#define size 6
typedef struct stack{
    int a[size];
    int top;
}stack;
void push(stack* p,int item){
    if(p->top==size-1){
        printf("Overflow");
    }
    else{
        p->top++;
        p->a[p->top]=item;
    }
}
void pop(stack* p){
    if(p->top==-1)
    printf("underflow");
    else{
        p->top--;
    }
}
int peek(stack* p){
    if(p->top==-1){
        printf("stack is empty");
        return -1;
    }
    else
    return p->a[p->top];
}
int isfull(stack* p){
    return (p->top==size-1);
}
void traverse(stack* p){
    printf("\nstack:\n");
    for(int i=p->top;i>=0;i--){
        printf("%d\n",p->a[i]);
    }
}
int isEmpty(stack*p){
    return (p->top==-1);
}
int main(){
    stack s;
    s.top=-1;
    push(&s,10);
    push(&s,20);
    push(&s,30);
    traverse(&s);
    pop(&s);traverse(&s);
    printf("TOP ELEMENT:%d",peek(&s));
    if(isEmpty(&s)==1)
    printf("\nStack iis empty");
    else
    printf("\nstack is not empry");

}