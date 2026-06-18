#include<stdio.h>
#include<string.h>
void Strcpy(char s[],char t[]){
    int i;
    for(i=0;t[i]!='\0';i++)
   { s[i]=t[i];}
    s[i]='\0';
}
int main(){
    char str1[20]="hello";
    char str2[20]="Hi";
    Strcpy(str1,str2);
    puts(str1);
    puts(str2);
}