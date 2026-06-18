#include <stdio.h>
int nol(int a){
    int i=1,d=0;
    for (int b=a;b>0;b=b-i){
        d++;
        i++;
    }
    return d;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",nol(n));
    return 0;
}
