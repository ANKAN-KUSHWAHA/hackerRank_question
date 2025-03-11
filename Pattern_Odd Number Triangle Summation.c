#include <stdio.h>

int main() {

    int n,t;
    scanf("%d",&n);
    int num=1;
    
    for(int i=1;i<=n;++i)
    {   
        int mid=0;
        for(int k=1;k<=n-i;++k)
        {
            printf("  ");
        }
        for(int j=1;j<=2*i-1;++j)
        {
            if(j==1 && i==1)
            {
                printf("%d ",num);
                mid=mid+num;
                num=num+2;
            }
                
            else if(j<i){
                printf("%d ",num);
                 mid=mid+num;
                 t=num;
                num=num+2;   
            }
            else if(j==i){
                
                int f=0;
                
                for(int m=0;m<=i-1;m++)
                {
                    f=f+2*m;
                   
                }
                printf("%d ",(t*(i-1))+mid+f);  
            }
            else if(j>i){
                
                printf("%d ",num);
                num=num+2;
            }
            
            
        }
        printf("\n");
        
    }
    
    return 0;
}
