#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,sum,i;
    srand(time(0));
    n= rand() % 1000;
    for(i=1;i<n;i++)
    {
        sum=sum+i;
    }
    printf("the sum of %d natural numbers are: %d",n,sum);
}