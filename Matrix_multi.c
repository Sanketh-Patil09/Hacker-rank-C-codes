#include<stdio.h>
#include<stdlib.h>
void display(int a[50][50], int b[50][50])
{
int ch;
printf("s");

}
void read_matrix(int a[50][50],int b[50][50],int row, int col)
{
    int i,j;
    printf("Enter the values of first matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++);
        {
            a[i][j]=rand();
        }
    }
    printf("Enter the values of second matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++);
        {
            scanf("%d", &b[i][j]);
        }
    }

}
void sum(int a[50][50], int b[50][50], int row, int col)
{
    int i,j;
    int sum[50][50];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++);
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
}
/*void mul(int a[50][50], int b[50][50], int row, int col)
{
    int i,j;
    int mul[50][50];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++);
        {
           mul[i][j]=(a[i][j]*b[i][j])+(a[i][j+1])
        }
    }
}*/
int main()
{
    int a[50][50],b[50][50],row,col,choice;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&row,&col);
    if(row==col)
    {
        //while(1)
        //{
       // printf("Choose the operation to be conducted:\n1.Display\n2.Addition\n");
        //switch(choice)
        //{
            //case 1: 
            display(a,b);
            //break;
            //case 2:
            sum(a,b,row,col);
           // break;
            //case 3:
            //mul(a,b,row,col);
            //break;
        //}
        //}

    }
}