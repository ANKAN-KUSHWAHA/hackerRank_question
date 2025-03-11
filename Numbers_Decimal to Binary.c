#include <stdio.h>
int main() {
    int n;
    int p=1;
    
    scanf("%d",&n);
    int original = n;
    int opp=0;
    
    while(n!=0){
        int rem=n%2;
        n=n/2;
        opp=opp +rem*p;
        p*=10;
    }
    
    printf("Binary equivalent of %d: %d",original,opp);
    return 0;
}
