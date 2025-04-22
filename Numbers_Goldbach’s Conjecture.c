#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>=4 && n%2==0) {
        for(int i=2; i<=n/2; ++i) {
            int flag=1;
            for(int j=2; j*j<=i; ++j) {
                if(i%j==0) {
                    flag=0;
                    break;
                }

            }
            if(flag==1) {
                int first=i;

                for(int k=n-first; k>=first; --k) {
                    int flag2=1;
                    for(int j=2; j*j<=k; ++j) {
                        if(k%j==0) {
                            flag2=0;
                            break;
                        }
                    }
                    if(flag2==1) {
                        int second=k;
                        if(first+second==n && first<=second) {

                            printf("%d %d",first,second);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    else
    printf("No Solution");

    return 0;
}
