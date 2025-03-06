#include <stdio.h>
int main() {

    int n;
    scanf("%d",&n);
    int flag=0;
    for(int i=1;i<=n;++i)
    {       
        int m=n/i;
        
        if(n%i==0){
            if(flag==0){
                if(m!=n){
                    printf(" %d",m);
                }
                else{
                    printf("%d",m);
                }
             flag=1;
        }
            else{
                flag=0;
            }            
        }
    }
    printf(".");
    return 0;
}
