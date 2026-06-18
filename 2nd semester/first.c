#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
}node;
void traverse(node* head){
    node*p=head;
    while(p->next!=head){
        printf("%d",p->data);
        p=p->next;
    }
    //printf("%d ",p->data);
}
node*insertbeg(node*head,int d){
    node*p=(node*)malloc(sizeof(node));
    p->data=d;
    p->next=NULL;
    if(head==NULL){
        head=p;
        head->next=head;
    }
    else
    {
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        p->next=head;
        head=p;
        temp->next=head;
        
    }
    return head;
}
int main(){
    node*head=NULL;
    head=insertbeg(head,10);
    head=insertbeg(head,20);
    head=insertbeg(head,30);
    traverse(head);
}

