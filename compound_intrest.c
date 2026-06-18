#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    printf("Enter the principal amount: ");
    scanf ("%f",&p);
    printf("\nEnter the rate:");
    scanf ("%f",&r);
    printf("\nEnter the time:");
    scanf ("%f",&t);
    float ci;
    ci = p * pow(1+(r/100),t)-p;
    printf("Compound intrest is: %.2f",ci);
    return 0;

}
