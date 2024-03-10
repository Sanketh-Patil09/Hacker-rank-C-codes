#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num = rand() % 100;
    if (num > 0)
        printf("%d is positive.\n", num);
    else if (num < 0)
        printf("%d is negative.\n", num);
    else
        printf("The number is zero.\n");
    return 0;
}
