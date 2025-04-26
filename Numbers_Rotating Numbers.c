#include <stdio.h>

int palindrome(int a,int b){
    b=b/100;
    int rem=a%100;
    a=a/100;
  
    return rem*b + a; 
}

int primeno(int a,int b){
    int rem=a%(b/100);
    a=a/(b/100);
    
    
    return rem*100 +a;
}
int main() {
    
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;++i){
         scanf("%d\n",&n);
        
        int dec=1;
          int m=n;
          int new=0;
        while(m!=0){
            int rem=m%10;
            m=m/10;
            new=10*new + rem;
            dec=10*dec;
       }
        
        int flag=1;
        for(int j=2;j*j<=n;++j){
            if(n%j==0){
               flag=0;
                break;
            }
        }
        
        if(flag==1 && new==n && n>99 ){
            printf("%d\n",n);
        }
        else if(flag==1 && n>99){
            int res= primeno(n,dec);
             printf("%d\n",res);
        }
        
        else if(new==n && n>99){
            int res = palindrome(n, dec);
            printf("%d\n",res);
         }
        else if(n%2==0){
            int rem=n%10;
            n=n/10;
            int res = rem*(dec/10) +n;
            printf("%d\n",res);
        }
        else if(n%2!=0){
            dec=dec/10;
            int rem=n%dec;
            n=n/dec;
            int res = rem*10 +n;
            printf("%d\n",res);
        }
        
        
    }
    return 0;
}
