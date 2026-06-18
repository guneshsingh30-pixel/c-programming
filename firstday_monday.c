#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    a=(n-1)%7;
    switch (a)
    {
        case 0:printf("monday");
        break;
        case 1:printf("Tuesday");
        break;
        case 2: printf("Wednesday");
        break;
        case 3:printf("Thursday");
        break;
        case 4:printf("friday");
        break;
        case 5: printf("saturday");
        break;
        case 6: printf("Sunday");
        break;
        default : printf("Invalid input");
    }
    return 0;
}l