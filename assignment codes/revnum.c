#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    srand(time(0));
    int num = rand() % 1000 + 1; // Generates a random number between 1 and 1000
    printf("Reverse of %d is: %d\n", num, reverseNumber(num));
    return 0;
}
