#include <stdio.h>

int is_smith_number(int n) {
    int m=n;
    int flag=1;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            flag=0;
        }
    }
    if(flag==1){
        return 0;
    }
    int sum=0;
    while(m!=0){
        int rem=m%10;
        m=m/10;
        sum=sum+rem;
    }
    int add=0;
    int i=2;
    while(n!=0){
        if(n%i==0){
            int fact=i;
            while(fact!=0){
                int rem=fact%10;
                fact=fact/10;
                add=add+rem;
            }
             n=n/i; 
            if(n<i){
                break;
            }
             
        }
        else{
            ++i;
        }
       
    }
    if(add==sum){
        return 1;
   }
    else{
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}
