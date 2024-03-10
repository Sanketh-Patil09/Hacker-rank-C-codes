#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int dividend = rand() % 100, divisor = rand() % 10, quotient, remainder;
    printf("Dividend: %d\n", dividend);
    printf("Divisor: %d\n", divisor);
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", remainder);
    return 0;
}
