#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,a[n],i,j,max;
    srand(time(0));
    n=(rand() % 50)+1;
    for(i=0;i<n;i++)
    {
        a[i]=rand() % 2000;
    }
    max=a[0];
    for(j=0;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
    }
    printf("The largest number of the array is: %d",max);

}