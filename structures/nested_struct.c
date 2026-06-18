#include<stdio.h>
struct address{
    char city[50];
    int pin;
    char phone[14];
};
struct employee{
    char name[20];
    struct address add;
};
int main(){
    struct employee emp;
    printf("Enter employee info:\n");
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    printf("name:%s \ncity:%s\nPincode:%d\nPhone:%s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
}