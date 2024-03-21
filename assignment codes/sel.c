#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    FILE *fp;
    int size;
fp = fopen("selection_sort_input.txt", "w");
fclose(fp);
    fp = fopen("selection_sort_input.txt", "r");
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

    selectionSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
