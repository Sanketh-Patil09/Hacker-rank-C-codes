#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    srand(time(0));
    int num = rand() % 1000 + 1; // Generates a random number between 1 and 1000
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
