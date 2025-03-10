#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     for(int j=0;j<=i;j++){
         int prev =j*(2*n+(j-1)*(-1))/2;
         if(j&1){
             int x=n-i;
             printf("%d ",prev+x);
         }
         else{
             printf("%d ",prev+i-j+1);
         }
       }
        printf("\n");
    }    
    return 0;
}
