#include<stdio.h>
int main(){
    int a,x,y,z;
    printf("Choose from the below options---\n");
    printf("1. Find average of three numbers.\n");
    printf("2.Largest among three numbers.\n");
    printf("3.Smallest among three numbers.\n");
    printf("4.Product of  three nuumbers.\n");
    printf("Enter your choice:");
    scanf("%d",&a);
    switch (a){
        case 1: scanf("%d %d %d",&x,&y,&z);
        float avg=(x+y+z)/3.0;
        printf("The average  is:%.2f",avg);
        break;
        case 2: scanf("%d %d %d",&x,&y,&z);
        int max;
        max=(x>y)&&(x>z)?x:(y>z)?y:z;
        printf("%d",max);
        break;
        case 3: scanf("%d %d %d",&x,&y,&z);
        int min;
        min=(x<y)&&(x<z)?x:(y<z)?y:z;
        printf("%d",min);
        break;
        case 4: scanf("%d %d %d",&x,&y,&z);
        int pro=x*y*z;
        printf("%d",pro);
        break;
        default:printf("invalid input");

        
    }
    return 0;
}