#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void arrayOperations(int arr[], int size) {
    int sum = 0, min = arr[0], max = arr[0];
    float avg;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
    avg = (float)sum / size;

    printf("Array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", avg);
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
}

int main() {
    srand(time(0));
    int arr[SIZE];
    for (int i = 0; i < SIZE; i++)
        arr[i] = rand() % 100; // Generates random numbers between 0 and 99 for the array

    arrayOperations(arr, SIZE);
    return 0;
}
