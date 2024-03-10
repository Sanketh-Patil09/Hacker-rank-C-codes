#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
 {
    int n, i, t1 = 0, t2 = 1, nt;
    srand(time(0));
    n= rand() % 50;
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nt = t1 + t2;
        t1 = t2;
        t2 = nt;
    }
    return 0;
}
