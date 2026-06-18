#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int coef;
    int exp;
    struct node*next;
}node;
node* insert(node*head,int c,int e){
    node*p=(node*)malloc(sizeof(node));
    p->coef=c;
    p->exp=e;
    p->next=NULL;
    if(head==NULL)
    return p;
    else{
        node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=p;
        return head;
    }
}
void traverse(node*head){
    node*p=head;
    while(p!=NULL){
        if(p->coef==0){
            p=p->next;
        continue;}
        else if(p->coef>0)
        printf("+%dx^%d",p->coef,p->exp);
        else
        printf("-%dx^%d",p->coef,p->exp);
        p=p->next;
    }
    printf("\n");

}
node*sum(node*poly1,node*poly2){
    node*poly3=NULL;
    node*p=poly1;
    node*q=poly2;
    while(p!=NULL && q!=NULL){
        if(p->exp==q->exp)
        {poly3=insert(poly3,p->coef+q->coef,p->exp);
        p=p->next;
        q=q->next;}
    
    else if((p->exp)<(q->exp)){
        poly3=insert(poly3,q->coef,q->exp);
        q=q->next;
    }
    else
    {poly3=insert(poly3,p->coef,q->exp);
    p=p->next;}}
    while(p!=NULL){
        poly3=insert(poly3,p->coef,p->exp);
        p=p->next;
    }
    while(q!=NULL){
        poly3=insert(poly3,q->coef,q->exp);
        q=q->next;
    }
    return poly3;

}

int main(){
    node* poly1=NULL;
    poly1=insert(poly1,2,3);
    poly1=insert(poly1,5,4);
    poly1=insert(poly1,9,2);
    traverse(poly1);
    node* poly2=NULL;
    poly2=insert(poly2,10,4);
    poly2=insert(poly2,15,3);
    poly2=insert(poly2,8,15);
    traverse(poly2);
    node*poly4=NULL;
    poly4=sum(poly1,poly2);
    traverse(poly4);
}