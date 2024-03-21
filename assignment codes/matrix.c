#include <stdio.h>

void addMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void multiplyMatrices(int mat1[][100], int mat2[][100], int result[][100], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void printMatrix(int mat[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    FILE *fp;
    int rows1, cols1, rows2, cols2;
 fp = fopen("matrix_operations_input.txt", "w");
 fclose(fp);
    fp = fopen("matrix_operations_input.txt", "r");
    if (fp == NULL) {
        perror("Error opening the file");
        return 1;
    }

    fscanf(fp, "%d %d", &rows1, &cols1);
    int mat1[100][100];
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            fscanf(fp, "%d", &mat1[i][j]);
        }
    }

    fscanf(fp, "%d %d", &rows2, &cols2);
    int mat2[100][100];
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            fscanf(fp, "%d", &mat2[i][j]);
        }
    }

    fclose(fp);

    if (rows1 != rows2 || cols1 != cols2) {
        printf("Matrices cannot be added or multiplied due to incompatible dimensions.\n");
        return 1;
    }

    int resultAdd[100][100], resultMultiply[100][100];

    addMatrices(mat1, mat2, resultAdd, rows1, cols1);
    printf("Sum of matrices:\n");
    printMatrix(resultAdd, rows1, cols1);

    multiplyMatrices(mat1, mat2, resultMultiply, rows1, cols1, cols2);
    printf("Product of matrices:\n");
    printMatrix(resultMultiply, rows1, cols2);

    return 0;
}
