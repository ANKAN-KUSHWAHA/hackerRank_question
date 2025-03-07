#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    if(n>1)
    {
        for(int i=1;i<=n;++i)
        {
            for(int k=1;k<=n-i;++k)
            {
                printf(" ");
            }
            for(int j=1;j<=i;++j)
            {
                printf("*");
            }
            for(int k=1;k<=2;++k)
            {
                printf(" ");
            }
            for(int j=1;j<=i;++j)
            {
                printf("*");
            }
           printf("\n"); 
        }
        
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
