#include <stdio.h>
void  merge(int a1[],int n1,int a2[],int n2,int a3[],int n3){
    int t=0;
    for(int i=0;i<=n1;i++){
        a3[i]=a1[i];
    }
    for(int i=0;i<=n2;i++){
        a3[n1+i]=a2[i];
    }

}
int main(){
    int n1,n2,n3;
    scanf("%d ",&n1);
    scanf("%d ",&n2);
    n3=n1+n2;
    int a1[n1];
    int a2[n2];    
    int a3[n3];

    for(int i=0;i<=n1-1;i++){
        scanf("%d",&a1[i]);
    }
    for(int i=0;i<=n2-1;i++){
        scanf("%d",&a2[i]);
    }
    merge(a1,n1,a2,n2,a3,n3);
    for(int i=0;i<=n1-1;i++){
        printf("%d",a1[i]);
    }
    printf("\n");
    for(int i=0;i<=n2-1;i++){
        printf("%d",a2[i]);
    }
    printf("\n");
   for(int i=0;i<=n3-1;i++){
        printf("%d",a3[i]);
   }
}