#include<stdio.h>
int main(){
    FILE *fp1;
    fp1 = fopen("file1.txt", "w");
    for(int i=1;i<=10;i++){
        putw(i,fp1);
        

    }
    fclose(fp1);
    fp1=fopen("file1.txt","r");
    for(int i=1;i<=10;i++){
        int num = getw(fp1);
        printf("%d\n",num);
    }
    return 0;
}