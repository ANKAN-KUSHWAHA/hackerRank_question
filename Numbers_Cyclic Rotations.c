#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int dub=n;
    int original=n;
    int dec=1;
    int count=0;
    for(int j=1;;){
        original=original/10;
        count++;
        if(original==0){
            break;
        }
        dec=dec*10;
    }
    for(int i=1;i<=count;++i){
        
        int rem=n%10;
        n=n/10;
        
        n=rem*dec +n;
        printf("%d\n",n);
        
    }
    
}
