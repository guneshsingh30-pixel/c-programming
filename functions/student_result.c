#include<stdio.h>
float per(float a,float b,float c,float d,float e){
  float sum=a+b+c+d+e;
  float perc=sum/5.0;
  return perc;
}
int main(){
float a,b,c,d,e;
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
if ((a>100)||(b>100)||(c>100) ||(d>100)||(e>100))
{printf("Invalid input");
return 0;}
int cp=0;
if (a<30)
cp+=1;
if ( b<30)
cp+=1;
if ( c<30)
cp+=1;
if ( d<30)
cp+=1;
if ( e<30)
cp+=1;

float p=per(a,b,c,d,e);
if (p>=75.0 && p<=100.0){
  printf("Pass First division %.1f CP:%d",p,cp);
}
else if(p>=60.0 && p<=74.0){
  printf("Pass Second division %.1f CP:%d",p,cp);
}
else if(p>=33.0 && p<=59.0){
  printf("Pass Third division %.1f CP:%d",p,cp);
}
else if(p<33.0){
  printf("Fail CP:%d",cp);
}
return 0;
}
