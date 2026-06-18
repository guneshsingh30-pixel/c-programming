#include<stdio.h>
void iS(int a[],int n){
    int i,j,k;
    for(i=1;i<=n-1;i++){
       int key=a[i];
        for(j=i-1;j>=0;j--){
            if(key<a[j])
            a[j+1]=a[j];
            else
            break;
        }
        a[j+1]=key;
        
    }
    for( k=0;k<=n-1;k++){
            printf("%d ",a[k]);
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int b=0;b<=n-1;b++)
    {
        scanf("%d",&a[b]);
    }
    iS(a,n);
    return 0;
}
