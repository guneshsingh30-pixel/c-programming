#include<stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>0 && y>0)
    {
        printf("first quadrant");
    }
    if (x>0 && y<0)
        printf("fourth quadrant");
    if (x<0 && y<0)
        printf("third quadrant");
    if (x<0 && y>0)
         printf("second quadrant");
    else 
        printf("Poiint is at origin");
}