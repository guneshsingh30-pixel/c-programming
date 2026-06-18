#include<stdio.h>
int main(){
    printf("1.Calculate factorial of a number\n");
    printf("2.sum of first n natural numbers\n");
    printf("3.Reverse of a given numbner\n");
    printf("Enter your choice :");
    int c;
    scanf("%d",&c);
    switch (c){
    case 1:{int n;
    scanf("%d",&n);
    int fact=1;
    for (int i=1;i<=n;i++)
    {fact=fact*i;}
    printf("%d",fact);
    break;}
    case 2:{int n;
    scanf("%d",&n);
    int sum=0;
    for (int i=1;i<=n;i++)
        {sum=sum+i;};
    printf("%d",sum);
    break;}
    case 3:{ int a;
    printf("enter three digit number;");
    scanf("%d",&a);
    int x,y,z , intrev;
    x=a%10;
    a=a/10;
    y=a%10;
    a=a/10;
    z=a%10;
    intrev=x*100+y*10+z;
    printf("the reverse no is: %d",intrev);
    break;}
    default : printf("Invalid input");
    break;}
    return 0;
}