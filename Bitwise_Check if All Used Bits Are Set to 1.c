#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
       printf("No");
        return 0;
    }
    if((n+1)+n==(n|(n+1))){
        printf("Yes");
    }
    else{
       printf("No"); 
    }
    return 0;
}
