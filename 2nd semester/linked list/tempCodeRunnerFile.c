node* p=head;
    while(p->data!=key && p->next!=NULL){
        p=p->next;
    }
    if(p=NULL){
        printf("Key not found\n");
        return head;
    }
    p->next=NULL;