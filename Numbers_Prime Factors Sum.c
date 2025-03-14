#include <stdio.h>
int main() {
    int n;
    int add=0;
    scanf("%d",&n);
    int i=2;
    while(n>1){
        if(n%i==0){
            add=add+i;
            n=n/i;
        }
        else{
            ++i;
        }
    }
    printf("%d",add);
    return 0;
}
