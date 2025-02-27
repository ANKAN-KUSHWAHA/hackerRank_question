#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    n=(n>>31)&1;
    if(n==1){
        printf("Negative");
    }
    else{
        printf("Positive");
    }
    return 0;
}
