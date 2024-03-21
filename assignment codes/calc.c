#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) 
        return a / b;
    else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

int main() {
    srand(time(0));
    float num1 = rand() % 100 + 1; // Generates a random number between 1 and 100
    float num2 = rand() % 100 + 1; // Generates a random number between 1 and 100

    printf("Addition: %.2f + %.2f = %.2f\n", num1, num2, add(num1, num2));
    printf("Subtraction: %.2f - %.2f = %.2f\n", num1, num2, subtract(num1, num2));
    printf("Multiplication: %.2f * %.2f = %.2f\n", num1, num2, multiply(num1, num2));
    printf("Division: %.2f / %.2f = %.2f\n", num1, num2, divide(num1, num2));
    return 0;
}
