#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int sum=0;
    int count=0;
    for(int i=2;;++i){
        int flag=1;
        for(int j=2;j<=i/2;++j){
            if(i%j==0 ){
                flag=0;
                break;
            }
        }
        if(flag==1){
            sum=sum+i;
            count++;
            if(count==n){
                printf("%d",sum);
                return 0;
            }
        }
    }
}
