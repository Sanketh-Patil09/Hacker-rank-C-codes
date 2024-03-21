#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci Series up to %d terms: ", n);
    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    srand(time(0));
    int limit = rand() % 10 + 1; // Generates a random limit between 1 and 10
    fibonacci(limit);
    return 0;
}
