#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int b=n&1;
    if(b==1){
        printf("Odd");
    }
    else{
        printf("Even");
    }
    
    
    return 0;
}
