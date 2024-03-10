#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int power(int base, int exponent) {
    if (exponent == 0)
        return 1;
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;
    srand(time(0));
    base= rand() % 10;
    exponent= rand() % 4;
    printf("Result = %d\n", power(base, exponent));
    return 0;
}
