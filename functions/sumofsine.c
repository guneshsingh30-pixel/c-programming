#include<stdio.h>
#include<math.h>
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main()
{
int x;
float n;
scanf("%f",&n); //Angle
scanf("%d",&x); //terms
float sum=0;
for(int i = 0; i <x; i++)
    {
        if(i % 2 == 0)
            sum = sum + (pow(n, 2*i + 1) / factorial(2*i + 1));
        else
            sum = sum - (pow(n, 2*i + 1) / factorial(2*i + 1));
    }
printf("%f",sum);
return 0;}