#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() 
{
    int arr[100], n, temp;
    srand(time(0));
    n=(rand() % 50) + 1;
    for (int i = 0; i < n; ++i) 
    {
        arr[i]=(rand() % 5000);
    }
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
