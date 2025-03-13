#include <stdio.h>
int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    
    int count =0;
    
    for(int i=num1;i<=num2;++i){
        int flag=1;
        for(int j=2;j<=i/2;++j){
            if(i%j==0 || i==1){
                flag = 0;
                break;
            }
        }
        if(flag==1 && i!=1){
            count++;
            
        }
    }
    printf("%d\n",count);
    for(int i=num1;i<=num2;++i){
        int flag=1;
        for(int j=2;j<=i/2;++j){
            if(i%j==0 ){
                flag = 0;
                break;
            }
        }
        if(flag==1 && i!=1){
        
            printf("%d ",i); 
        }
    }
    
    return 0;
}
