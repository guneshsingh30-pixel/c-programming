//1. to checkk validty of  adate as like dd/mm/yyyy.

#include<stdio.h>
int leapyear(int n)
{
    if ((n%400==0)||(n%4==0&&n%100!=0))
        return 1;
    return 0;

}
int main(){
    int d,m,y,maxdays;
    scanf("%d %d %d",&d,&m,&y);
    if (y<1 ||d<1 ||m<1||m>12){
        printf("Invalid input");
    }
    switch(m){
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            maxdays = 31;
            break;            
        case 4: case 6: case 9: case 11:
            maxdays = 30;
            break;

        case 2:
            if (leapyear(y))
                maxdays = 29;
            else
                maxdays = 28;
            break;
    }
    if (d>maxdays)
    printf("invalid");
    else
    printf("valid");
    return 0;
}