#include<stdio.h>
int main()
{   int a,rec;
    scanf("%d",&a);
    int first=0;
    int second =1;
    if (a==0){
        printf("%d",first);
    }
    else if (a==1){
        printf("%d %d",first,second);
    }
    else if(a==2){
        printf("%d %d %d",first,second,second);

    }
    else if (a>=3){
        printf("%d %d ", first, second);
        for (int i=3;i<=a;i++){
            int sum=first+second;
            printf("%d ",sum);
            first=second;
            second=sum;
           
        }
        
    }
    
    return 0;
}