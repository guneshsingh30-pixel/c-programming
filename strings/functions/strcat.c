#include<stdio.h>
#include<string.h>
void strcaty(char s[],char t[]){
    int n=strlen(s);
    for(int i=n,j=0;t[j]!='\0';i++,j++)
    {s[i]=t[j];}
   // s[i]='\0';
}
int main(){
    char str1[50] = "Hello ";
    char str2[] = "World";

    strcaty(str1, str2);

    puts(str1);   
    return 0;
}