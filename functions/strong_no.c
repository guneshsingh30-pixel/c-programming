#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact = fact * i;
    return fact;
}
int main()
{
    int a, digit, f = 0;
    scanf("%d", &a);
    int temp = a;
    while (temp > 0)
    {
        digit = temp % 10;
        f = f + factorial(digit);  // sum of factorial of digits
        temp = temp / 10;
    }

    if (f == a)
        printf("Strong no");
    else
        printf("Not");

    return 0;
}