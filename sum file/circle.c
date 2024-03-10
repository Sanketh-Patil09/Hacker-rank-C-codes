#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    float r,a;
    float pi=3.14;
    srand(time(0));
    r=(rand() % 50)+1;
    a= pi*r*r;
    printf("the area of a circle of radius %f: %f",r,a);
}