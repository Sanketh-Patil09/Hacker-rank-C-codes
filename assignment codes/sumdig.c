#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    srand(time(0));
    int num = rand() % 1000 + 1; // Generates a random number between 1 and 1000
    printf("Sum of digits of %d is: %d\n", num, sumOfDigits(num));
    return 0;
}
