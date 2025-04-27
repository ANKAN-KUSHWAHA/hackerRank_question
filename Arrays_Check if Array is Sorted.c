#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;++i){
        scanf("%d",&a[i]);
    }
    
    int isInc=1;
    for(int i=0;i<n-1;++i){
        if(a[i]>a[i+1]){
            isInc=0;
            break;
        }
        
        
    }
    if(isInc==1  ){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}
