#include<stdio.h>

int main() {
    int a;
    int facto = 0;
    int fact = 0;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (a % i == 0)
            fact += 1;
    }

    if (fact == 2) {

        int intrev = 0;
        int temp = a;  

        
        while (temp > 0) {
            int digit = temp % 10;
            intrev = intrev * 10 + digit;
            temp = temp / 10;
        }
        for (int j = 1; j <= intrev; j++) {
            if (intrev % j == 0)
                facto = facto + 1;
        }

        if (facto == 2)
            printf("twisted prime");
        else
            printf("Not twisted prime");
    }
    else {
        printf("not twisted prime");
    }

    return 0;
}
