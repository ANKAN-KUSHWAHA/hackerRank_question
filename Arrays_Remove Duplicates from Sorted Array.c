#include <stdio.h>

void removeDuplicates(int arr[], int *n){
    int c=0;
    
	for(int i=1;i<*n;++i){
        if(arr[i]!=arr[c] ){
            c++; 
            arr[c]=arr[i];
             
        }
    }
    *n=c+1;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", n); 

    return 0;
}
