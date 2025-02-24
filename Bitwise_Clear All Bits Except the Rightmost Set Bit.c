#include <stdio.h>
int main() {
    int n,a;
    scanf("%d",&n);
    a=n^(n-1);
    n=n&a;
    printf("%d",n);
    return 0;
}
