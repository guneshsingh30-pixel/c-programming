#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
void traverse (node *head)
{
    node *p=head;
    while (p!=NULL){
        printf("%d ",p ->data);
        p=p->next;
    }
}
node *insertatbeg (node *head ,int d){
    //create new node
    node *n=(node*)malloc(sizeof (node));
    n ->data=d;
    n->next = head;
    if(head==NULL){
        head=n;
    }
    else
        return n;
}
node *insert(node*head,int d,int key){
    
    node *p=head;
    // create new node
    node *n = (node*)malloc(sizeof(node));
    n->data = d;
    n->next = NULL;
    // search for key
    while(p != NULL && p->data != key){
        p = p->next;
    }

    if(p == NULL){
        printf("Key not found!\n");
        return head;
    }

    // insert after key
    n->next = p->next;
    p->next = n;

    return head;
}
node* insertatend(node* head,int d){
    node* n=(node*)malloc(sizeof (node));
    n->data=d;
    n->next=NULL;
    if(head==NULL)
    head=n;
    else{
        node* p=head;
        while(p->next!=NULL){
                   p=p->next;}
    p->next=n;
    }
    return head;
}
node* deletebeg(node* head){
    if(head==NULL)
    return head;
    head=head->next;
    return head;
}
node* del(node* head){
    if(head==NULL || head->next==NULL)
    return NULL;
    node* p=head;
    while(p->next->next!=NULL)
    {
        p=p->next;
    }
    p->next=NULL;
    return head;
}
node* delposition(node* head,int key){
    if(head==NULL || head->next==NULL)
    return NULL;

    node* p=head;
    node* prev=NULL;
    while(p!=NULL && p->data!=key ){
    	prev=p;
        p=p->next;
    }
    if(p==NULL){
        printf("Key not found\n");
        return head;
    }
    prev->next=p->next;
    return head;
}

int main(){
    node *head=NULL;//creating a new linked head->NULL
    head=insertatbeg(head,10 );//creating a new linked head->10->NULL
    head=insertatbeg(head,20 );//creating a new linked head->20->10->NULL
    head=insertatbeg(head,50 );//creating a new linked head->50->20->10->NULL
    head=insert(head,30,50);
    head=insertatend(head,100);
    traverse(head);//50 20 10
    printf("\n");
    head=deletebeg(head);
    head=del(head);
    head=delposition(head,20);
    traverse(head);
}
