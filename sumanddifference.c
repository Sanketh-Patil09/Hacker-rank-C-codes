#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,c,x;
    float d,e,f,y;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&d,&e);
    printf("%d %d\n%.1f %.1f",c=a+b,x=a-b,f=d+e,y=d-e);
    return 0;
}