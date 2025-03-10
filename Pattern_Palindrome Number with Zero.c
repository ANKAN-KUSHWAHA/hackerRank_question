#include <stdio.h>
int main() {
    int n,num1,num2;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        num1=i-1;
        num2=1;
        for(int k=1;k<=n-i;++k)
        {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;++j)
        {
            if(j<=i)
            {
               printf("%d",num1--); 
            }
            if(j>i)
            {
                printf("%d",num2++);
            }
        }
        printf("\n");
    }
    return 0;
}
