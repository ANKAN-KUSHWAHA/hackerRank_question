#include <stdio.h>

int is_disarium_number(int n) {
   
    int temp=n;
    int temp1=n;
    
    int sum=0;
    int count =0;
    while(temp1!=0){
        count++;
        temp1=temp1/10;
    }
    while(temp!=0){
        
        int rem=temp%10;
        int sq=1;
        for(int i=1;i<=count;++i){
            sq=sq*rem;
        }
       count--;
        sum=sum+sq;
         
        
        temp=temp/10;
        
    }
    
    if(sum==n){
        return 1;
    }
    else{
        return 0;
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}
