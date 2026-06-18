//It consists of single line output showing the day for that particular date. SUNDAY or 
//MONDAY or TUESDAY or WEDNESDAY or THURSDAY or 
//FRIDAY or SATURDAY if date is invalid e.g 31 6 2020 then print 'INVALID DATE'
//Sample Input 0

//8 6 2004
//Sample Output 0

//TUESDAY
#include<stdio.h>

int main(){
    int d,m,y;
    int days=0,i,j;
    printf("Enter present date(dd/mm/yyyy):");
    scanf("%d %d %d",&d,&m,&y);
    if(m==2){
        if((y%400==0)||(y%100!=0 && y%4==0)){
            if(d>29);
            {printf("Invalid input");
            return 0;}
        }
        else if(d>28){
            printf("Innvalid input");
            return 0;
        }
    }
    if (m<1||m>12){
        printf("Invalid inpuut");
        return 0;
    }
    for(i=1;i<y;i++){
        if((i%400==0)||(i%4==0 && i%100!=0))
        days+=366;
        else
        days+=365;
    }
    for (j=1;j<m;j++){
        if(j==1 || j==3||j==5||j==7||j==8||j==10||j==12){
            days+=31;
            if(d>31){
                printf("Invalid input");
                return 0;
            }
        }
    else if(j==4||j==6||j==9||j==11){
        days+=30;
        if (d>30)
        {
          printf("Invalid input");
          return 0;
        }
        
    }
    else if(j==2){
        if ((y%400==0 )||(y%4==0 && y%100 !=0))
        days+=29;
        else 
        days+=28;
    }
}
days+=d;
int a=(days-1)%7;
switch (a){
    case 0:printf("Monday");
    break;
    case 1:printf("Tuesday");
    break;
    case 2:printf("Wednesday");
    break;
    case 3:printf("Thursday");
    break;
    case 4:printf("Friday");
    break;
    case 5:printf("Saturday");
    break;
    case 6:printf("Sunday");
    break;
    default:printf("Invalid input");
}
return 0;
}