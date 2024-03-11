#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void addition(int n)
{
    int i,num,sum=0;
    srand(time(0));
    FILE* sptr;
    FILE* aptr;
    sptr = fopen("store.txt","w");
    for(i=0;i<n;i++)
    {
        num= (rand() % 1000) + 1;
        putw(num,sptr);
    }
    sclose(sptr);
     sptr = fopen("store.txt","r");
    for(i=0;i<n;i++)
    {
        num= getw(sptr);
        sum=sum+num;
    }
    sclose(sptr);
    printf("\nThe sum of %d numbers is: %d",n,sum);

}
int main()
{

}