#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int m=n;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        n=n/10;
        int fact=1;
        for(int i=rem;i>=1;--i){
            fact=fact*i;
        }
        sum = sum + fact;
    }
    if(m==sum){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
