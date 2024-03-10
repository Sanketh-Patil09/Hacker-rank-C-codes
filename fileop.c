#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int no,num[10],n,i,choice;
    int sum=0;
    int ans;
    srand(time(0));
    n= rand() % 5;
    FILE* fptr;
    FILE* sptr;
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
    fclose(fptr);
    for(i=0;i<n;i++)
    {
        sum=sum+num[i];
    }
    sptr=fopen("sum.txt","w");
    putw(sum,sptr);
    fclose(sptr);
    sptr=fopen("sum.txt","r");
    printf("Enter a choice:\n1.Display answer\n2.exit");
    scanf("%d",&choice);
    if(choice==1)
    {
     ans=getw(sptr);   
     fclose(sptr);
    }
    else if(choice==2)
    {
        exit (0);
    }
    else
    {
        printf("\nWrong choice entered");
    }
    
}