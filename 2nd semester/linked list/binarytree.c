#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    char data;
    struct node*left;
    struct node*right;
}treenode;
treenode* createnode(char val){
    treenode* p=(treenode*)malloc(sizeof(treenode));
    p->data=val;
    p->left=NULL;
    p->right=NULL;
    return p;
}
void inorder(treenode* root){
    if(root==NULL)
    return;
    else{
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}
void preorder(treenode* root){
    if(root==NULL)
    return;
    else{
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(treenode* root){
    if (root==NULL)
    return ;
    else{
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}
treenode* insert(treenode*root,int val){
    if(root==NULL)
    {treenode*p=createnode(val);
    return p;}
    
    if(root->data>val)
    root->left= insert(root->left,val);
    else 
    root->right= insert(root->right,val);
    return root;

}
treenode* min(treenode*root){
    treenode*p=root;
    while(p->left!=NULL)
    p=p->left;
    return p;
}
treenode* max(treenode*root){
    treenode*p=root;
    while(p->right!=NULL)
    p=p->right;
    return p;
}
treenode* delete(treenode*root,int val){
    treenode*parent=NULL,*ptr=root,*temp;
    while(ptr!=NULL&& ptr->data!=val){
        if(ptr->data>val){
            parent=ptr;
            ptr=ptr->left;
        }
        else{
            parent=ptr;
            ptr=ptr->right;
        }
    }
    if(ptr->right!=NULL){
        treenode *Min=min(ptr->right);
        int t=Min->data;
        root=delete(root,t);
        ptr->data=t;
    }
    else if(ptr->left!=NULL){
        treenode*Max=max(ptr->left);
        int t=Max->data;
        root=delete(root,t);
        ptr->data=t;
    }
    else{
        if(parent==NULL)
        return NULL;
        if(parent->data>val)
        parent->left=NULL;
        else
        parent->right=NULL;
    }
    return root;
}

int main(){
    /*treenode*A=createnode('A');
    treenode*B=createnode('B');
    treenode*C=createnode('C');
    treenode*D=createnode('D');
    treenode*E=createnode('E');
    treenode*F=createnode('F');
    treenode*G=createnode('G');
    A->left=B;
    A->right=C;
    B->left=D;
    B->right=E;
    C->left=F;
    C->right=G;
    inorder(A);
    printf("\n");
    preorder(A);
    printf("\n");
    postorder(A);*/
    treenode*root=NULL;
    int a[]={14,12,45,3,41,4,3,6,5};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    root=insert(root,a[i]);
    inorder(root);
    printf("\n");
    preorder(root);
     printf("\n");
    postorder(root);
   treenode*minnode=min(root);
   treenode*maxnode=max(root);
   if(minnode!=NULL){
    printf("Minimun:%d\n",minnode->data);
   }
   else{
    printf("Tree is empty\n");

   }
   if(maxnode!=NULL)
   printf("MAximuimm:%d\n",maxnode->data);
   root=delete(root,41);
   inorder(root);
}