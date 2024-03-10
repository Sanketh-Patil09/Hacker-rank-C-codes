#include<stdio.h>
#include<stdlib.h>

void display(int a[50][50], int b[50][50], int row, int col) {
    int i, j;
    printf("First matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nSecond matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}

void read_matrix(int a[50][50], int b[50][50], int row, int col) {
    int i, j;
    printf("Enter the values of first matrix: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the values of second matrix: \n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
}

void sum(int a[50][50], int b[50][50], int row, int col) {
    int i, j;
    int sum[50][50];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void mul(int a[50][50], int b[50][50], int row, int col) {
    int i, j, k;
    int mul[50][50];
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            mul[i][j] = 0;
            for (k = 0; k < col; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Product of matrices:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[50][50], b[50][50], row, col, choice;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d", &row, &col);
    if (row == col) {
        read_matrix(a, b, row, col);
        printf("Choose the operation to be conducted:\n1. Display\n2. Addition\n3. Multiplication\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                display(a, b, row, col);
                break;
            case 2:
                sum(a, b, row, col);
                break;
            case 3:
                mul(a, b, row, col);
                break;
            default:
                printf("Invalid choice!\n");
        }
    } else {
        printf("Matrices must be square for multiplication!\n");
    }
    return 0;
}
