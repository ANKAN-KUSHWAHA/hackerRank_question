#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int sum=0;
    int flag=1;
    if(n==1){
        printf("NO");
        return 0;
    }
    for(int k=2;k*k<=n;++k){
        if(n%k==0){
            printf("NO");
            return 0;
        }
    }
    while(n!=0){
        int rem=n%10;
        n=n/10;
        sum=sum +rem;
    }
    for(int i=2;i<=sum/2;++i){
        if(sum%i==0){
            flag=0;
            printf("NO");
            break;
        }
    }
    if(flag==1){
        printf("YES");
    }  
    
    return 0;
}
