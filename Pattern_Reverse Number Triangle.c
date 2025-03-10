#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int pre;
    int num=0;
    for(int i=1;i<=n;++i)
    {
        pre=num+i;
        for(int j=1;j<=i;++j)
        {  
           if(j==1)
           {
               num=pre;
           }
            printf("%d ",pre--);    
        }
        printf("\n");
    }
    return 0;
}
