#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    int a,b;
    scanf("%d %d",&a , &b);
    switch (ch)
    {
        case '+' : 
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case'*':
            printf("%d",a*b);
            break;
        case'/':
            printf("%d",a/b);
            break;
        default :
            printf("invalid input");
    }
    return 0;
}