#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    else
        return (num % 10 + sumOfDigits(num / 10));
}

int main() {
    int num;
    srand(time(0));
    num= rand() % 30000;
    printf("Sum of digits of %d = %d\n", num, sumOfDigits(num));
    return 0;
}
