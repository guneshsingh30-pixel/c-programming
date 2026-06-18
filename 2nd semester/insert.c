#include<stdio.h>
void insert(int a[],int n,int key,int pos){
    a[n+1]=0;
    for(int i=n;i>=pos;i--)
    {
    a[i]=a[i-1];}
    a[pos-1]=key;
    
}
int main(){
int n;
int a[100];
scanf("%d",&n);

for(int j=0;j<n;j++){
    scanf("%d",&a[j]);
}
int k,pos;
scanf("%d",&k );
scanf("%d",&pos);

insert(a,n,k,pos);
n++;
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}