#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    n=n&15;
    if(n==15){
        printf("4");
    }
    else if(n==7 || n==14 || n==13 || n==11){
        printf("3");
    }
    else if(n==3 || n==12 || n==9 || n==10 || n==6 || n==5){
        printf("2");
    }
    else if(n==1 || n==2 || n==4 ||n==8){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}
