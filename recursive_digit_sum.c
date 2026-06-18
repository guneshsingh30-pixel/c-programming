#include <stdio.h>
#include <string.h>

int main() {
    char n[100], result[1000] = "";
    int t;

    scanf("%s %d", n, &t);

    // Repeat the string
    for (int i = 0; i < t; i++) {
        strcat(result, n);
    }

    // Print the repeated string
    printf("%s\n", result);

    int sum = 0;

    // First digit sum (from repeated string)
    for (int i = 0; result[i] != '\0'; i++) {
        sum += result[i] - '0';
    }

    // Reduce to single digit
    while (sum >= 10) {
        int temp = sum;
        sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }
    }

    printf("%d", sum);
    return 0;
}

