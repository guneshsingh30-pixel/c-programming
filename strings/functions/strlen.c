#include<stdio.h>
int strlen(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;}
        return i;
    
}
int main(){
    char str[20];
    gets(str);
    int n=strlen(str);
    printf("%d",n);
}