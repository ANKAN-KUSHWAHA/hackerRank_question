#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int small,large;
    for(int i=n-1;i>=2;--i){
        int flag=1;
        
        for(int j=2;j<=i/2;++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            small=i;
            break;
        }
    }
    for(int i=n+1;;++i){
        int flag=1;
        
        for(int j=2;j<=i/2;++j){
            if(i%j==0){
               
                flag=0;
                break;
            }
        }
        if(flag==1){
            large=i;
            break;
        }
    }
    printf("%d",large-small);
    return 0;
}
