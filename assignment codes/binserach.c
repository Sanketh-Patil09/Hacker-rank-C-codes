#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    FILE *file;
    int size, target;
 file = fopen("binary_search_input.txt", "w");
 fclose(file);
    file = fopen("binary_search_input.txt", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    fscanf(file, "%d", &size);
    int arr[size];

    for (int i = 0; i < size; ++i) {
        fscanf(file, "%d", &arr[i]);
    }

    fscanf(file, "%d", &target);
    fclose(file);

    int index = binarySearch(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
