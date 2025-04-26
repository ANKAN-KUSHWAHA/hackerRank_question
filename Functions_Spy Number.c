#include <stdio.h>

int is_spy_number(int n) {
    int temp=n;
    int pro=1;
    int sum=0;
    while(temp!=0){
        int rem=temp%10;
        pro=pro*rem;
        sum=sum+rem;
        temp=temp/10; 
    }
    if(sum==pro){
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); \
    printf("%d\n", is_spy_number(n));
    return 0;
}
