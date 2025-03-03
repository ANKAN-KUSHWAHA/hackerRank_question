#include <stdio.h>
int main() {
    int n,a,d;
    scanf("%d\n %d %d",&n,&a,&d);
    for(int i=0;i<n;++i)
    {   int t=a + i*d;
        printf("%d ",t);
    }
    return 0;
}
