#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 100, isPrime = 1;
    printf("Number: %d\n", num);
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
