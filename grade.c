#include <stdio.h>

int main() {
    float per;
    printf("Enter percentage: ");
    scanf("%f", &per);

    // Convert percentage to integer range 0–10
    int range = per / 10;

    switch (range) {
        case 10: // 100
        case 9:  // 90–99
        case 8:  // 80–89
            printf("Grade: A");
            break;
        case 7:  // 70–79
        case 6:  // 60–69
            printf("Grade: B");
            break;
        case 5:  // 50–59
        case 4:  // 40–49
            printf("Grade: C");
            break;
        case 3:  // 30–39
            printf("Grade: D");
            break;
        default: // below 30
            printf("Grade: F");
    }

    return 0;
}