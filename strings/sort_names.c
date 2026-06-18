#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char name[n][20];
    fflush(stdin);
    for(int i=0;i<=n-1;i++)
    {gets(name[i]);}
    
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<n-1-i;j++)
        {
            if (strcmp(name[j],name[j+1])>0)
            {char temp[20];
             strcpy(temp,name[j]);
             strcpy(name[j],name[j+1]);
             strcpy(name[j+1],temp);
            }
        }
    }
    printf("\nSorted String");
    for(int i=0;i<=n-1;i++)
        {printf("\n%s ",name[i]);}
    return 0;
}