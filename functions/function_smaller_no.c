#include<stdio.h>
//int minimum(int,int);

int minimum(int a,int b)
{   int max;
    max=a<b?a:b;
   // printf("%d",max);
    return max;
}
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    int min;
    min=minimum(x,y);
    printf("%d",min);
    return 0;
}