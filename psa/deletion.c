#include<stdio.h>
int main(){
    int a[10],i,pos,size;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position you want to delete:");
    scanf("%d",&pos);
    for(int j=pos-1;j<size;j++)
    {a[j]=a[j+1];}
    printf("Resultant array\n");
    for(int k=0;k<size-1;k++)
    {
        printf("%d ",a[k]);
    }
    return 0;
}