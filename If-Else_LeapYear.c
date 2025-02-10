#include <stdio.h>

int main() {

    int p;
    scanf("%d",&p);
    if(p>0)
    {
        if(p%4==0)
        {
            if(p%100==0 )
            {
                if(p%400==0)
                {
                    printf("Yes, %d is a leap year.",p);
                }
                else
                {
                    printf("No, %d is not a leap year.",p); 
                }
                
            }
            else
            {
                printf("Yes, %d is a leap year.",p);    
            }
        }
        else
        {
            printf("No, %d is not a leap year.",p);
        }
    }
     else
     {
         printf("The given year %d is Invalid year.",p);
     }          
    return 0;
}