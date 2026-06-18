#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;
    struct node*prev;
}node;
void traverse(node* head){
    node*p=head;
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
node* insertatbeg(node*head,int d){
    node*p=(node*)malloc(sizeof(node));
    p->data=d;
    p->next=NULL;
    p->prev=NULL;
    if(head==NULL){
        head=p;
    }
    else{
        p->next=head;
        head->prev=p;
        head=p;
    }
    return head;
}
node* insertatend(node*head,int d){
    node*p=(node*)malloc(sizeof(node));
    p->data=d;
    p->next=NULL;
    p->prev=NULL;
    if(head==NULL)
    return p;
    node*temp=head;
  
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        p->prev=temp;
        return head;

    
}
node* insertpos(node*head,int d,int key){
    node*p=(node*)malloc(sizeof(node));
    p->data=d;
    p->next=NULL;
    p->prev=NULL;
     node* temp=head;
    while(temp!=NULL && temp->data!=key)
    temp=temp->next;
   
    p->next=temp->next;
    p->prev=temp;
    
    temp->next=p;
    return head;
}
node* delbeg(node*head){
    node*p=head;
    if(p->next==NULL)
    return head;
    head=p->next;
    p->prev=p->next;
    return head;
}
node* delend(node* head){
    node*p=head;
    if(p->next==NULL)
    return head;
    while(p->next->next!=NULL)
    p=p->next;
    p->next=NULL;
   
    return head;
}
node*delpos(node*head,int k){
    node*p=head;
    if(p->next==NULL)
    return head;
    while(p->data!=k)
    p=p->next;
    p->prev->next=p->next;
    p->next->prev=p->prev;
    return head;
}
int main(){
    node* head=NULL;
    head=insertatbeg(head,10);
    head=insertatbeg(head,20);
    head=insertatbeg(head,30);
    traverse(head);
    head=insertatend(head,40);
    traverse(head);
     head=insertpos(head,50,20);
    traverse(head);
    head=delbeg(head);
    traverse(head);
     head=delend(head);
    traverse(head);
     head=delpos(head,50);
    traverse(head);
}