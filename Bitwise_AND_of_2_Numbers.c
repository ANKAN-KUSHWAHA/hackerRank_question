#include <stdio.h>
int main() {
    int a,b,n;
    scanf("%d %d",&a,&b);
    n=~a|~b;
    n=~n;
    printf("%d",n);
    return 0;
}
