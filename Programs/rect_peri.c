#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int l,b,p;
    srand(time(0));
    l=(rand() % 10) + 1;
    b=(rand() % 10) + 1;
    p=2*(l+b);
    printf("The side of the rectangle of length is %d and breadth is: %d\n",l,b);
    printf("perimeter of the rectangle: %d",p);
}