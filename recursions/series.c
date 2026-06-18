#include <stdio.h>

void printseries(int n){
    if (n == 0)
        return;

    printseries(n-1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    printseries(n);
    return 0;
}
