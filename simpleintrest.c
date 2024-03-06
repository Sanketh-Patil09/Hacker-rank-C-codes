#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    float principal = rand() % 1000 + 100, rate = rand() % 10 + 1, time = rand() % 5 + 1;
    float simpleInterest;
    simpleInterest = (principal * rate * time) / 100.0;
    printf("Principal: %.2f\n", principal);
    printf("Rate: %.2f\n", rate);
    printf("Time: %.2f\n", time);
    printf("Simple Interest: %.2f\n", simpleInterest);
    return 0;
}
