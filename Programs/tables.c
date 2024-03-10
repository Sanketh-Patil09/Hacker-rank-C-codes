#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 100;
    printf("Number: %d\n", num);
    printf("Multiplication table:\n");
    for (int i = 1; i <= 10; ++i)
        printf("%d x %d = %d\n", num, i, num * i);
    return 0;
}

