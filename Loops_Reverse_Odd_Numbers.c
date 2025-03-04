#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=n*2;i>=3;i-=2)
    {
          printf("%d ",i-1);  
    }
    if(n>0){
    printf("1.");
    }
    return 0;
}
