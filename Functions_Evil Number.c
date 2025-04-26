#include <stdio.h>

int is_evil_number(int n) {
    int count=0;
    
        
        while(n!=0){
        int rem=n%2;
        n=n/2;
        if(rem==1){
            count++;
        }
    
    }
    
   
    if(count%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}
