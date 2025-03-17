#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int m=n;
    int sum=0;
    while(m!=0){
        int rem=m%10;
        m=m/10;
        sum=sum+rem;
        if(m==0 && sum>9){
            m=sum;
            sum=0;
        }
    }
    if(sum==1){
        printf("%d is a magic number",n);
    }
    else{
        printf("%d is not a magic number",n);
    }
    return 0;
}
