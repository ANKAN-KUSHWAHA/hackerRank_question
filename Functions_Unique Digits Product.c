#include <stdio.h>

int find_unique_digit_product(int n) {
    int pro=1;
    if(n==0){
        return 0;
    }
    while(n>0){
        int rem = n%10;
        n=n/10;
        
        int m = n;
        int flag=1;
    while(m>0){
        int rem1=m%10;
        m = m/10;
        if(rem1==rem){
            flag=0;
            break;
        }
    }
    if(flag==1 ){
        pro=pro*rem;
    }
        
    }
    return pro;
        
}



int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}
