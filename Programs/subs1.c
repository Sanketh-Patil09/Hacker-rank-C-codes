#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
 {
    int a,b,d;
    srand(time(0));
    a= rand() % 10000;
    b= rand() % 10000;
    d=a+b;
    printf("The difference is: %d ",d);
    return 0;
}
