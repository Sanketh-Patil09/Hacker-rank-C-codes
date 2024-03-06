#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main() {
    int n, num, rev = 0, og;
    srand(time(0));
    num=(rand() % 30000);
    og = num;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (og == rev)
        printf("%d is a palindrome.\n", og);
    else
        printf("%d is not a palindrome.\n", og);
    return 0;
}
