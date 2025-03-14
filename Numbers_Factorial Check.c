#include <stdio.h>
int main() {
    long n;
    scanf("%ld",&n);
    long pro=1;
    
    for(int i=1;;++i){
        pro=pro*i;
        if(pro==n){
            printf("%d",i);
            return 0;
        }
        else if(pro>n){
           
            printf("NO");
            return 0;
        }
    }    
    return 0;
}
