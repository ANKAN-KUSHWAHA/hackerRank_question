#include <stdio.h>
int main() {
    int a,b,n;
    scanf("%d %d",&a,&b);
    n=(a-b)>>31;
    if(n){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}
