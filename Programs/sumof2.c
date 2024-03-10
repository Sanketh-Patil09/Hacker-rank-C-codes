#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
 {
    int a,b,s;
    srand(time(0));
    a= rand() % 10000;
    b= rand() % 10000;
    s=a+b;
    printf("The sum is: %d ",s);
    return 0;
}
