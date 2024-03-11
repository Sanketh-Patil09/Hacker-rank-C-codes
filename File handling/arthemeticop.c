#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void addition(int n)
{
    int i,num,sum=0,ans;
    srand(time(0));
    FILE* sptr;
    FILE* aptr;
    sptr = fopen("store.txt","w");
    for(i=0;i<n;i++)
    {
        num= (rand() % 1000) + 1;
        putw(num,sptr);
        sum=sum+num;
    }
    aptr = fopen("answer.txt","w");
    putw(num,aptr);
    sclose(aptr);
    sclose(sptr);
    aptr = fopen("answer.txt","r");
    ans=getw(aptr);
    printf("\nThe sum of %d numbers is: %d",n,ans);
}
int main()
{
    int n,choice;
    


}