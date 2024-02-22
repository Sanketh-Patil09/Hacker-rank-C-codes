#include<stdio.h>
#include<stdlib.h>
void statement_print(int n);
int main()
{
    int n;
    if(n>=1&&n<=10^9)
    {
        scanf("%d",&n);
        statement_print(n);
    }
    else
    {
        exit(05);
    }
}
void statement_print(int n)
{
    if(n>=1&&n<=9)
    {
        switch(n)
        {
            case 1:
            printf("one\n");
            break;
            case 2:
            printf("two\n");
            break;
            case 3:
            printf("three\n");
            break;
            case 4:
            printf("four\n");
            break;
            case 5:
            printf("five\n");
            break;
            case 6:
            printf("six\n");
            break;
            case 7:
            printf("seven\n");
            break;
            case 8:
            printf("eight\n");
            break;
            case 9:
            printf("nine\n");
            break;
        }
    }
    else if(n>9)
    {
        printf("Greater than 9");
    }
}