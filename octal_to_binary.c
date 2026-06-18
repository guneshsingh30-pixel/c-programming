#include <stdio.h>
#include<math.h>

int main() {
    int decimal, binary = 0,i=0, rem;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal != 0) {
        rem = decimal % 8;
        binary = binary + pow(8,i)*rem;
        i++;
        decimal = decimal / 10;
    }

    printf("Binary equivalent = %d\n", binary);

    return 0;
}
