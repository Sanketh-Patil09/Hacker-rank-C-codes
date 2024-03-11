#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char s[1000];
    FILE* stpr;
    stpr = fopen("sen.txt","w");
    scanf("%[^\n]%*c",s);
    fprintf(s,1000,stpr);
}