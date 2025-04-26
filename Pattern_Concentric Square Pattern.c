#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int up=n;
    int dw=1-n;
    for(int i=1; i<=2*n-1; ++i)
    {
        dw++;
        int lf=n;
        int lf1=n;
        int rg=up;
        int rg1=dw;
        for(int j=1; j<=2*n-1; ++j)
        {
            if(i<=n) {
                if(j>=i &&j<=2*n-1-i+1) {
                    printf("%d ",up);
                }
                else {
                    if(j<n) {
                        if(j>=1 && j<=i ) {
                            printf("%d ",lf--);
                        }

                    }
                    else {
                        printf("%d ",++rg);
                    }
                }
            }

            else {
                if(j<=i && j>=2*n-1-i+1) {
                    printf("%d ",dw);
                }
                else {
                    if(j<n) {
                        if(j>=1 && j<=i ) {
                            printf("%d ",lf1--);
                        }
                    }
                    else {
                        printf("%d ",++rg1);
                    }
                }
            }
        }
        up--;
        printf("\n");
    }
}
