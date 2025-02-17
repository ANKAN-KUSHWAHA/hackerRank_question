#include <stdio.h>

int main() {

    int budget,numguest,fcpg,dc,mc,exp;
    scanf("%d",&budget);
    scanf("%d",&numguest);
    scanf("%d",&fcpg);
    scanf("%d",&dc);
    scanf("%d",&mc);
    scanf("%d",&exp);
    if( ( (numguest>5 && numguest<=25) && ((fcpg*numguest<(budget*50/100)) || (dc<(budget*30/100))) && (exp<(budget-(fcpg+dc))) && (budget>(fcpg*numguest + dc+exp))) ||
     ((numguest>25 && numguest<=50) && ((fcpg*numguest<(budget*50/100)) || (dc<(budget*30/100))) && (mc>0) &&(exp<(budget-(fcpg+dc+mc))) && (budget>(fcpg*numguest + dc+exp))) ){
        
        printf("Celebration Approved");
        }
    else{
        printf("Celebration Denied");
    }
    
        
    return 0;
}
