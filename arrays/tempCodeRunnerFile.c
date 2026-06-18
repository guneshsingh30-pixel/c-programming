#include<stdio.h>
int dsp(int a[],int n,int k){
    int count =0;
    for (int i=0;i<=n-1;i++){
        scanf("%d",&a[i]);
    }
    for (int j=0;j<=n-1;j++){
        if (a[j]+a[j+1]==k)
        count++;
        return 1;
        
    }