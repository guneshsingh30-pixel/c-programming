#include <stdio.h>

int main() {
    int d, m, y;
    int days = 0, i, j;

    printf("Enter present date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
    if (m==2){
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
            if (d>29){
            printf("Invalid input");
           return 0;
        }}
        else if(d>28){
            printf("Invalid input");
            return 0;
        }
    
    if (m<1 ||m>12){
        printf("Invalid input");
        return 0;
    }

    // Add days for all full years before the current one
    for (i = 1; i < y; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days = days + 366;  // leap year
        else
            days = days + 365;  // normal year
    }

    // Add days for all full months before the current one
    for (j = 1; j < m; j++) {
        if (j == 1 || j == 3 || j == 5 || j == 7 || j == 8 || j == 10 || j == 12)
            {days = days + 31;
            if (d>31){
                printf("Invalid input");
                return 0;
            }}
        else if (j == 4 || j == 6 || j == 9 || j == 11)
           { days = days + 30;
        if (d>30){
            printf("Invalid input");
            return 0;
        }}
        else if (j == 2)         // February
            
                
            if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
                {days = days + 29;
                }
            else if((y % 400 != 0) || (y % 4 != 0 && y % 100 == 0))
                {days = days + 28;
                }
        }
    }

    // Add days of the current month
    days = days + d;

    printf("Total number of days passed since 1/1/1 = %d\n", days);

    return 0;
}
