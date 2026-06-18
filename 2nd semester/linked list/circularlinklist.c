#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node*next;}node;
void traverse(node* head){
    node*temp=head;
    while(temp->next!=head){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d ",temp->data);
}
node*insertatbeg(node* head,int d){
    node*n=(node*)malloc(sizeof(node));
    n->data=d;
    n->next=NULL;
    if(head==NULL){
        head=n;
        n->next=head;
    }
    else{
        node* temp=head;
        while(temp->next!=head)
            temp=temp->next;
            n->next=head;
            head=n;
            temp->next=head;
    }
    return head;
}
node* insertkey(node* head ,int d,int key){
    node* n=(node*)malloc(sizeof(node));
    n->data=d;
    if(!head){
        n->next=n;
        return n;
    }
    node* temp=head;
    if(temp->data==key){
    n->next=temp->next;
    temp->next=n;
    return head;}
    temp=temp->next;
    while(temp!=head){
        if(temp->data==key){
    n->next=temp->next;
    temp->next=n;
    return head;}
    temp=temp->next;
    }
    printf("Not found");
    return head;

}
node* insertatend(node* head,int d){
    node* n=(node*)malloc(sizeof(node));
    n->data=d;
    n->next=NULL;
    if(head==NULL){
        head=n;
        head->next=head;
    }
    else{
        node* temp=head;
        while(temp->next!=head)
        temp=temp->next;
        temp->next=n;
        n->next=head;
    }
    return head;
}
node* delbeg(node*head){
    if(head==NULL)
    return head;
    node*last=head;
    while(last->next!=head){
        last=last->next;
    }
    head=head->next;
    last->next=head;
    return head;
}
node*delend(node*head){
    if(head==NULL)
    return NULL;
    node*temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    temp->next=head;
    return head;
}
node*delkey(node*head,int key){
    if(head==NULL)
    return NULL;
    node* temp=head;
    node*prev=NULL;
    if(head->data==key){
        if(head->next==head){
        return NULL;

    }
    node*last=head;
    while(last->next!=head){
        last=last->next;
    }
    last->next=head->next;
    node*del=head;
    head=head->next;
    return head;}
    prev=head;
    temp=head->next;
    while(temp!=head){
        if(temp->data==key){
            prev->next=temp->next;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }    
    return head;
}

int main(){
    node* head=NULL;
    head=insertatbeg(head,10);
    head=insertatbeg(head,20);
    head=insertatbeg(head,30);
    head=insertatend(head,40);
    traverse(head);
    printf("\n");
    head=insertkey(head,50,20);
    traverse(head);
    printf("\n");
    head=delbeg(head);
    head=delend(head);
    head=delkey(head,50);
    traverse(head);}
