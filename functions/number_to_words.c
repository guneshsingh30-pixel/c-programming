#include<stdio.h>
#include<math.h>
void digit(int a){
    int temp=a;
    int count=0;
    while (temp!=0){
        int digit=temp%10;
        count=count*10+digit;
        temp/=10;
    
    }
    while(count!=0){
        int digit=count%10;
        switch(digit){
            case (0):printf("Zero ");
            break;
        case (1):printf("One ");
        break;
        case 2:printf("Two ");
        break;
        case 3:printf("Three ");
        break;
        case 4:printf("Four ");
        break;
        case 5:printf("Five ");
        break;
        case 6:printf("Six ");
        break;
        case 7:printf("Seven ");
        break;
        case 8:printf("Eight ");
        break;
        case 9:printf("Nine ");
        break;
        }
        count/=10;
       
    }
}
int main(){
int a;
scanf("%d", &a);
digit(a);
return 0;
}