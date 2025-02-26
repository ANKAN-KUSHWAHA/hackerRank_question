#include <stdio.h>
int main() {
    int a,b,n,m,max;
    scanf("%d %d",&a,&b);
    n=a-b;
    m=(n>>31);
    max=((a&(~m)) | (b&m));
    printf("%d",max);
    return 0;
}
