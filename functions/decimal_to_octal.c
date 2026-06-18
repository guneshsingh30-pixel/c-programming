#include <stdio.h>

// Function to convert decimal to octal
long decimalToOctal(int decimalNumber) {
    long octalNumber = 0;
    int remainder, place = 1;
    while (decimalNumber != 0) {
        remainder = decimalNumber % 8;
        octalNumber += remainder * place;
        decimalNumber /= 8;
        place *= 10;
    }
    return octalNumber;
}

int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Octal Value = %ld", decimalToOctal(decimal));
return 0;
}