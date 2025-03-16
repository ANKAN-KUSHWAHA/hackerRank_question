#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int original=n;
    int sum=0;
    while(n!=0){
        int rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    if(original%sum==0){
        printf("%d is a harshad number",original);
    }
    else{
        printf("%d is not a harshad number",original);
    }
    return 0;
}
