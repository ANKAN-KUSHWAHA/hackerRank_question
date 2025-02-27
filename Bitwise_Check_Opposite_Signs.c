#include <stdio.h>
int main() {
    int a,b,n,m;
    scanf("%d %d",&a,&b);
    n=((a>>31)&1);
    m=((b>>31)&1);
    if(((n==1) && (m==1)) || ((n==0) && (m==0))){
        printf("No");
    }
    else{
        printf("Yes");
    }
        return 0;
}
