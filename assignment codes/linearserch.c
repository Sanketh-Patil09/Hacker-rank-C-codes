#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    FILE *file;
    int size, target;
file = fopen("linear_search_input.txt", "w");
fclose(file);
    file = fopen("linear_search_input.txt", "r");
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

    int index = linearSearch(arr, size, target);

    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
