#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n;
    scanf("%ld",&n);
    long m=n;
    int count=0;
    int div=1;
    while(n!=0){
        n=n/10;
        div=div*10;
    }
    long square=m*m;
    int rem1=square%div;
    
    if(m==rem1){
        printf("%ld is automorphic",m);
    }
    else{
        printf("%ld is not automorphic",m);
    }
    return 0;
}
