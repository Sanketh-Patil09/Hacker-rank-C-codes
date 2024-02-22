#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    int n,a[20],i,j;
    int sum=0;
    scanf("%d", &n);
        for(i=0;i<5;i++)
        {
        a[i]=(n%10);
        n=(n/10);
        }
    
        for(j=0;j<5;j++)
        {
            sum=sum+a[j];
        }
        printf("%d",sum);
    return 0;
}