#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int nn=n;
    int nnn=n;
    int final=0;
    int count=0;
    while(nn!=0){
        nn=nn/10;
        count++;
    }
    for(int i=1;i<=count;++i){
        int rem=nnn%10;
        nnn=nnn/10;
        int rem1=1;
        for(int j=1;j<=count;++j){
            rem1=rem1*rem;
        }
        final=final+rem1;
    }
    if(final==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
