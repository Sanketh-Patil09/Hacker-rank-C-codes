//find the sum of all array elements
#include <stdio.h>

int main() {
    int n, i, j, sum = 0;

    
    scanf("%d", &n);

  
    int a[n];

    
    for (j = 0; j < n; j++) {
        scanf("%d", &a[j]);
    }

    
    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    
    printf("%d\n", sum);

    return 0;
}


