#include<stdio.h>
#include<string.h>
struct students{
    char name[20];
    int roll;
    float per;
};
int main(){
    struct students n[3];
    for (int i=0;i<3;i++){
        scanf("%s",n[i].name);
        scanf("%d",&n[i].roll);
        scanf("%f",&n[i].per);
    }
    for (int i=0;i<3;i++){
        if(n[i].per>75.00)
        {
        printf("%s  ",n[i].name);
        printf("%d  ",n[i].roll);
        printf("%f\n",n[i].per);}
    }
    int max=n[0]*per;
    int index=0;
    for(int i=1;i<n;i++)
    {
        if(n[i].per>max)
        {
            max=n[i].per.index=i;
        }
    }
    printf("\nTopper:%d %s",n[index].rollno,s[index].name);
}