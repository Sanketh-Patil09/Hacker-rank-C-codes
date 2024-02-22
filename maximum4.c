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