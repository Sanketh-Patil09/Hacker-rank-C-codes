#include <stdio.h>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    FILE *fp;
    int size;
fp = fopen("bubble_sort_input.txt", "w");

    fp = fopen("bubble_sort_input.txt", "r");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fscanf(fp, "%d", &size);
    int arr[size];

    for (int i = 0; i < size; ++i) {
        fscanf(fp, "%d", &arr[i]);
    }

    fclose(fp);

    bubbleSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
