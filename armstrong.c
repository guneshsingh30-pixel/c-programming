/*#include <stdio.h>
int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    for (int n=a;n<=b;n++){
    int temp=n;
    int rev=0;
    while(temp!=0){
        int digit=temp%10;
        rev=rev+digit*digit*digit;
        temp/=10;
        }
    
    
    if (rev ==n)
   { printf("%d\n",n);}
    }
    return 0;
}
#include<stdio.h>
//print all amstrong number in a given range by the user
int main(){
    int a;//lower end
    int b;//higher end
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {   int count=0,r,sum=0;
        int t=i;
        //count digits
        while(t!=0)
        {
            t=t/10;
            count++;
        }
        t=i;
        //calculate sum of digits to the power of order of number
        while(t!=0)
        {
            r=t%10;
            int u=1;
            for(int j=1;j<=count;j++)
            {
                u=u*r;
            }
            sum=sum+u;
            t=t/10;
    }
    if(sum==i)
        {
            printf("%d ",sum);
        }
}
return 0;
}*/
#include<stdio.h>
#include<math.h>
int main(){
    
    int a,b;
    
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
   { int temp=i;
    int count=0;
    
    while (temp!=0){
        temp=temp/10;
        count++;}
    temp =i;
    int rev=0;
   while(temp!=0){
        int digit=temp%10;
        rev=rev+pow(digit,count);
        temp/=10;

        }if (rev == i)
   { printf("%d\n",i);}
    }
    
    
    
    return 0;

    }