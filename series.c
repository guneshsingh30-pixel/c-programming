#include<stdio.h>
#include<math.h>
int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
/*int main(){
    int n,i;
    float sum=0.0;
    printf("Enter no. of terms:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+(float)i/factorial(i);
        if(i==n)
        printf("%d/%d!",i,i);
        else
        printf("%d/%d! + ",i,i);
    }
    printf("\nSum of series: %f",sum);
    return 0;
    
}
//1/1! + 2/2! + 3/3! + 4/4! + 5/5!
//Sum of series: 2.708333 


int main()
{
int n;
scanf("%d",&n);
float sum=0.0;
for(int i=1;i<=n;i++){
    sum=sum+(float)(pow(-1,i-1)*pow(i,2)/factorial(2*i-1));
    if(i%2==0)
    printf("%d/%d!+ ",i*i,(2*i-1));
    else
    printf("%d/%d!-",i*i,(2*i-1));
}
printf("\nSum of series: %f",sum);
return 0;
}
//1/1!-4/3 + 9/5!-16/7 + 25/9!-
//Sum of series: 0.405228*/



int main()
{
int n;
scanf("%d",&n);
float sum=0.0;
for(int i=1;i<=n;i++){
    sum=sum+pow(-1,i-1)*(float)pow(n,2*i-1)/factorial(2*i-1);
    if(i%2==0)
    printf("%d/%d + ",pow(n,2*i-1),(2*i-1));
    else
    printf("%d/%d!-",pow(n,2*i-1),(2*i-1));
}
printf("\nSum of series: %f",sum);
return 0;}