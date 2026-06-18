#include<stdio.h>
#include<string.h>
int main(){
    char a[20],b[20],c[40];
    gets(a);
    gets(b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    puts(a);
    puts(b);
}