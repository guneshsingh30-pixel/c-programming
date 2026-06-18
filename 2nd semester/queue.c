#include<stdio.h>
#define size 4
typedef struct{
    int a[size];
    int front;
    int rear;
}queue;
void enqueue(queue*p,int data){
    if((p->front==0 && p->rear==size-1)||(p->front==p->rear+1))
{
    printf("Overflow");
    return;

}
if(p->front==-1){
    p->front=p->rear=0;
    p->a[p->rear]=data;
}
else{
    p->rear=(p->rear+1)%size;
    p->a[p->rear]=data;
}
}
void traverse(queue*p){
    printf("\n");
    if(p->front==-1)
    {
        printf("Empty queue");
        return;
    }
    if(p->front<=p->rear){
        for(int i=p->front;i<=p->rear;i++)
        printf("%d ",p->a[i]);
    }
    else{
        for(int i=p->front;i<=size-1;i++)
        printf("%d ",p->a[i]);
        for(int i=0;i<=p->rear;i++)
        printf("%d ",p->a[i]);
    }
}
void dequeue(queue*p){
    if(p->front==-1){
        printf("Underflow");
        return;
    }
    if(p->front==p->rear)
    p->front=p->rear=-1;
    else
    p->front=(p->front+1)%size;
}
int main(){
    queue q;
    q.front=-1;
    q.rear=-1;
    enqueue(&q,10);
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    traverse(&q);
    dequeue(&q);
    traverse(&q);
}