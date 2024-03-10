#include <stdio.h>

int main() {
    int n, i, j,temp;

    
    scanf("%d", &n);

  
    int a[n];

    
    for (j = 0; j < n; j++) {
        scanf("%d", &a[j]);
    }

    
    for (i = 0; i < n/2; i++) 
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;   
    }
     for (j = 0; j < n; j++) {
        printf("%d ", a[j]);
    }
    return 0;
}


