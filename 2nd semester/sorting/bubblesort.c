#include<stdio.h>
void bs(int a[],int n){
    int t;
    for(int i=1;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
       
    }
     for (int k=0;k<=n-1;k++)
    printf("%d ",a[k]);
    
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int b=0;b<=n-1;b++)
    {scanf("%d",&a[b]);}
    bs(a,n);
    return 0;

}
