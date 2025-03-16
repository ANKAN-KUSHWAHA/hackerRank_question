#include <stdio.h>

int main() {

    long n;
    scanf("%ld",&n);
    int count=0;
    if(n<0){
        n=-1*n;
    }
    for(int i=1;;){
        
        int flag=1;
        int rem=n%10;
        n=n/10;
        for(int j=2;j<=rem/2;++j){
            if(rem%j==0){
                flag=0;
                break;
                
            }
        }
        if(flag==1 && rem>1){
            count++;
            
        }
        if(n==0){
            break;
        }
        
    }
    printf("%d",count);
    return 0;
}
