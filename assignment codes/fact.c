#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    srand(time(0));
    num = rand() % 10 + 1; // Generate a random number between 1 and 10
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
