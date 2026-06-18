#include<stdio.h>
#include<string.h>
struct bank{
    char name[20];
    int accno;
    char acctype[50];
    char address[50];
};
int main(){
    struct bank n[3];
    for(int i=0;i<3;i++){
        scanf("%s",n[i].name);
        scanf("%d",&n[i].accno);
        scanf("%s",n[i].acctype);
        scanf("%s",n[i].address);
    }
    for (int i =0;i<3;i++){
        printf("%s ",n[i].name);
        printf("%d ",n[i].accno);
        printf("%s ",n[i].acctype);
        printf("%s\n",n[i].address);
    }
    return 0;
}