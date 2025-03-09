#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        int num1=1;
        int num2=2;
        for(int j=1;j<=i;++j)
        {
            if(i%2!=0)
            {
                printf("%d ",num1);
                num1=num1+2;
            }
            else
            {
               printf("%d ",num2);
                num2=num2+2; 
            }
        }
        printf("\n");
    }
    return 0;
}
