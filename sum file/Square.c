#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int s,a;
    srand(time(0));
    s=(rand() % 10) + 1;
    a=s*s;
    printf("The side of the square is: %d",s);
    printf("Area of the square: %d",a);
}