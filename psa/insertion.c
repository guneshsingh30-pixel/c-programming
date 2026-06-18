#include<stdio.h>
int main(){
    int a[10],i,pos,item,size;
    scanf("%d",&size);
    if (size > 10) {
        printf("Size exceeds array limit");
        return 0;
    }
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    if (size == 10) {
        printf("Array is full, insertion not possible");
        return 0;
    }
    printf("Enter position you want to insert:");
    scanf("%d",&pos);
    if (pos < 0 || pos > size) {
        printf("Invalid position");
        return 0;
    }
    printf("Enter item you want to insert");
    scanf("%d",&item);
    for(i=size-1;i>=pos;i--)
   { a[i+1]=a[i];}
    a[pos]=item;
    size++;
    printf("Resultant array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}