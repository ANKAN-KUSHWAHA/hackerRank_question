#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i=2;i<=n;i++) {
    int num=i;
        int prime_factors = 0;

        while(num%2==0){
            prime_factors++;
            num/= 2;
            }

        for (int j=3;j*j<=num;j+=2) {
            while (num%j==0) {
                prime_factors++;
                num /= j;
                }
        }
        if (num>2) {
            prime_factors++;
        }
        if (prime_factors==2) {
            count++;
        }
    }
        printf("%d\n",count);

    return 0;
}
