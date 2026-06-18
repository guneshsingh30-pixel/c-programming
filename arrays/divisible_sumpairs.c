#include<stdio.h>
int dsp(int a[],int n,int b){
    int count =0;
    for (int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for (int j=0;j<=n-1;j++){
    for(int k=j+1;k<=n-1;k++)
        {if ((a[j]+a[k])%b==0)
        {count++;}}
    }
    return count;
}
int main(){
    int n,k;
    scanf("%d",&n);
    int a[n];
    scanf("%d",&k);
    printf("%d",dsp(a,n,k));
    return 0;
}