/*For each integer n in the interval [a,b] (given as input) :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
Else if  n>9and it is an even number, then print "even".
Else if  n>9and it is an odd number, then print "odd".
Note: [a,b]={x belongs to Z| a<=x<=b}={a,a+1,....,b}*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_STR_LEN 10
#define NUM_STRINGS 9


int main() 
{
    int a, b;
    int n;
  	char strings[NUM_STRINGS][MAX_STR_LEN]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
        for(n=a;n<=b;n++)
        {
            if(n<=9)
            {
                printf("%s",strings[n]);
            }
            else if(n>9)
            {
                if(n%2==0)
                {
                    printf("even");
                }
                else if(n%2==1)
                {
                    printf("odd");
                }
            }
        }
    return 0;
}

