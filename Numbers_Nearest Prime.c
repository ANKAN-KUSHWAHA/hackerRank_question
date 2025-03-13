#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    
    int small,large,prime1,prime2;
    
    if(n==1){
        printf("2\n");
        return 0;
    }
    for(int i=n;i>=2;--i){
        int flag1=1;
        for(int j=2;j*j<=i;++j){
            if(i%j==0){
                flag1=0;
                break;
            }
        }
        if(flag1==1 ){
            small=n-i;
            prime1=i;
            break;
        }
    }
    for(int i=n;;++i){
        int flag2=1;
        for(int j=2;j*j<=i;++j){
            if(i%j==0){
                flag2=0;
                break;
            }
        }
        if(flag2==1){
            large=i-n;
            prime2=i;
            
            break;
        }
    }
    if(large>=small ){
        printf("%d",prime1);
    }
    else{
        printf("%d",prime2);
    }    
    return 0;
}
