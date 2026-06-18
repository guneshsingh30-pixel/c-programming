#include<stdio.h>
int dis(int a, int b){
    if(a>b)
    return a-b;
    else
    return b-a;
}
char* catAndMouse(int x,int y,int z){
    int d1=dis(x,z);
    int d2=dis(y,z);
    if(d1<d2)
    return "Cat A";
    else if(d2<d1)
    return "Cat B";
    else
    return "Mouse C";
}
int main(){
    int n,x,y,z;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d %d",&x, &y ,&z);
        printf("%s",catAndMouse(x,y,z));
    }
}