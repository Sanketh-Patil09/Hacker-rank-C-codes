#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1 = rand() % 100, num2 = rand() % 100, num3 = rand() % 100;
    float average;
    average = (num1 + num2 + num3) / 3.0;
    printf("Average of %d, %d, and %d is: %.2f\n", num1, num2, num3, average);
    return 0;
}
