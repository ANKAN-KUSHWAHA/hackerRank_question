#include <stdio.h>
int main() {

    float n;
    float total;
    int flag = 1;
    scanf("%f",&n);
    if(n>=0){
        if(n<=100){
            total=n*5;
        }
        else if(n>100 && n<=300){
            total= (100*5) + ((n-100)*7);
        }
        else{
            total= (100*5) + (200*7) + ((n-300)*10);
        }
    }
    else{
        flag = 0;
        printf("Invalid Input!");
    }
    if(flag==1){
        if(total<=1200){
            
            total=(total*90/100);
            printf("The electricity bill is: %0.2f.",total);
        }
        else{
            printf("The electricity bill is: %0.2f.",total);
        }
        
    }
    
    return 0;
}