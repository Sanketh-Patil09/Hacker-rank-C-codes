#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int no,num[10],n,i;
    int sum=0;
    srand(time(0));
    n= rand() % 5;
    FILE* fptr;
    if(fptr==NULL)
    {
        printf("Error creating file.");
        exit(0);
    }
    fptr= fopen("store.txt","w");
    for(i=0;i<n;i++)
    {
        no= (rand() % 50);
        putw(no, fptr);

    }
    fclose(fptr);
    fptr=fopen("store.txt","r");
    for(i=0;i<n;i++)
    {
    printf("%d ",num[i]=getw(fptr));
    }
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    printf("\nThe sum of numbers is: %d", sum);

}