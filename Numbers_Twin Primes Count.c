#include <stdio.h>
int main() {
    int n; 
    scanf("%d",&n);
    int prime=2;
    int count=0;
    for(int i=2;i<=n;++i){
        int flag=1;
        for(int j=2;j*j<=i;++j){
            if(i%j==0){
                flag=0;
                break;
            } 
        }
        if(flag==1){
            
            if(i-prime==2){
                count++;
            }
            prime=i;
        }
    }
     printf("%d",count);
    return 0;
}
