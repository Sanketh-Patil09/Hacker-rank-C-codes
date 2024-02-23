/*Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
Note
There is not built in max function in C. Code that will be reused is often put in a separate function, e.g. int max(x, y) that returns the greater of the two values.*/
#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    int max;
    if(a>b&&a>d&&a>c)
    {
        max=a;
    }
    else if(a<b&&b>d&&b>c)
    {
        max=b;
    } 
    else if(c>b&&c>d&&a<c)
    {
        max=c;
    }
    else if(d>b&&a<d&&d>c)
    {
        max=d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}