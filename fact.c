#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 100;
    printf("Number: %d\n", num);
    printf("Factors: ");
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
