#include<stdio.h>
void ss(int a[],int n){
    for(int i=0;i<=n-2;i++){
        int min=a[i],index=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<min)
            {min=a[j];
            index=j;}
        }
    int t=a[index];
    a[index]=a[i];
    a[i]=t;
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
    ss(a,n);
    return 0;
}
