#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    srand(time(0));
    int num = rand() % 50 + 1; // Generates a random number between 1 and 50
    if (isPrime(num))
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
    return 0;
}