#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","w");
    char ch;
    ch=getc(fp1);
    while(ch!=EOF){
        putc(ch,fp2);
        ch=getc(fp1);
    }
    printf("File copied successfully");
    fclose(fp1);
    fclose(fp2);
    return 0;   

}