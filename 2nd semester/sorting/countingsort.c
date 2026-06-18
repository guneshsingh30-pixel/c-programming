#include<stdio.h>
void countsort(int a[],int n){
    int count[10]={0};
    for(int i=0;i<n;i++){
        int x=a[i];
        count[x]++;
    }
    for(int i=1;i<10;i++)
        count[i]+=count[i-1];
    int temp[n];
    for(int i=n-1;i>=0;i--){
        int x=a[i];
        int y=count[x];
        temp[y-1]=x; 
        count[x]--;
    }
    printf("\n");
    for(int i=0;i<n;i++)
        a[i]=temp[i];
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    countsort(a,n);
    for(int i=0;i<n;i++)
    printf("%d",a[i]);

}