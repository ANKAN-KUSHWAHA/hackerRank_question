#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int original=n;
    int rvs=0;
    
    while(n!=0){
        int rem=n%10;
        rvs=10*rvs+rem;
        n=n/10;
    }
    if(rvs==original){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
