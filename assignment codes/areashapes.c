#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159

float areaRectangle(float length, float width) {
    return length * width;
}

float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

float areaCircle(float radius) {
    return PI * radius * radius;
}

int main() {
    srand(time(0));
    float length = rand() % 10 + 1; // Generates a random length between 1 and 10
    float width = rand() % 10 + 1; // Generates a random width between 1 and 10
    float base = rand() % 10 + 1; // Generates a random base between 1 and 10
    float height = rand() % 10 + 1; // Generates a random height between 1 and 10
    float radius = rand() % 10 + 1; // Generates a random radius between 1 and 10

    printf("Area of Rectangle with length %.2f and width %.2f: %.2f\n", length, width, areaRectangle(length, width));
    printf("Area of Triangle with base %.2f and height %.2f: %.2f\n", base, height, areaTriangle(base, height));
    printf("Area of Circle with radius %.2f: %.2f\n", radius, areaCircle(radius));
    return 0;
}
