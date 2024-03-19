#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n, i, max;

    srand(time(0));
    n = (rand() % 50) + 1;

    int a[n]; // Declare array after getting the value of n

    for (i = 0; i < n; i++)
    {
        a[i] = rand() % 2000;
    }

    max = a[0];
    for (i = 1; i < n; i++) // Start loop from index 1
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("The largest number of the array is: %d\n", max);

    return 0; // Add return statement
}
