#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[20],c[40];
    gets(a);
    gets(b);
    strcpy(c,a);
    strcat(c," ");
    strcat(c,b);
    puts(c);
}