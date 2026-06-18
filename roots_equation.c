#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    float d = b * b - 4.0 * a * c;
    float x, y;

    if (d > 0) {
        printf("REAL AND DISTINCT\n");
        x = (-b + sqrt(d)) / (2.0 * a);
        y = (-b - sqrt(d)) / (2.0 * a);
        printf("%.2f %.2f\n", x, y);
    } 
    else if (d == 0.0) {
        printf("REAL AND EQUAL\n");
        x = -b / (2.0 * a);
        printf("%.2f %.2f\n", x, x);
    } 
    else {
        printf("IMAGINARY ROOTS\n");
        x = -b / (2.0 * a);
        y = sqrt(-d) / (2.0 * a);
        printf("%.2f+%.2fi %.2f-%.2fi\n", x, y, x, y);
    }

    return 0;
}