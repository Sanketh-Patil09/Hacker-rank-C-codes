#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int p,s;
    srand(time(0));
    s=(rand() % 10) + 1;
    p=4*s;
    printf("The side of the square is: %d",s);
    printf("perimeter of the square: %d",p);
}