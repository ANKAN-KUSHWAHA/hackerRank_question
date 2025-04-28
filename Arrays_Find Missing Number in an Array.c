#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n-1];

    int output = 0;
    for (int i = 0; i < n-1; ++i) {
        scanf("%d", &a[i]);
        output += a[i];  
    }
    
    int sum = n*(n + 1) / 2;

    
    int lost = sum - output;

    printf("%d", lost);
    return 0;
}
