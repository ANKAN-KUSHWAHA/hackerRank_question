#include <stdio.h>

int is_kaprekar(int n) {
    int temp=n;
    int s=n*n;
    int temps=s;
    int count=0;
    int dec=1;
    while(temp!=0){
        count++;
        dec=10*dec;
        temp=temp/10;
    }
    int right=temps%dec;
    temps=temps-right;
    int left=temps/dec;
     
    if(right+left==n){
        return 1;
    }
    else{
         return 0;
    }
    
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}
