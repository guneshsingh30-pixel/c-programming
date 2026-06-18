#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    
    if (ch=='a' ||  ch=='e'||ch=='i' || ch=='o' || ch=='u' 
        ||ch=='A' ||  ch=='E'||ch=='I' || ch=='O' || ch=='U')
        printf("Vowel");
    else if ((ch>='A'&& ch<='Z')|| (ch>='a' && ch<='z'))
    printf("Consonants");
    else if (ch>='0' && ch<='9')
    printf("Digit");
    else
    printf("Special symbol");
    return 0;
    }
