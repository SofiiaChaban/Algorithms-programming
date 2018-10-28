#include <stdio.h>
#include<stdlib.h>

void randMatrix(int rows, int columns, int matrix1[20][20], int matrix2[20][20]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix1[i][j] = rand() % 10;
            matrix2[i][j] = rand() % 10;
        }
    }
}

int main() {
    int rows, columns, sum[20][20];
    printf("Enter number of rows in matrix A and matrix B: ");
    scanf("%d", &rows);
    printf("Enter number of columns in matrix A and matrix B: ");
    scanf("%d", &columns);
    printf("Size of your matrices is: [%d x %d]\n", rows, columns);
    int matrix1[20][20];
    int matrix2[20][20];
    printf("Matrix A:\n");
    randMatrix(rows, columns, matrix1, matrix2);
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < columns; j++) {
            printf("%d |", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < columns; j++) {
            printf("%d |", matrix2[i][j]);
        }
        printf("\n");

    }
    printf("Summary of matrices = \n");
    for (int i = 0; i < rows; i++) {
        printf("|");
        for (int j = 0; j < columns; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];

            printf("%d|\t", sum[i][j]);
        }
        printf("\n");
    }
    int transposed[20][20];

    for(int i=0;i<columns;i++) {
        for (int j = 0; j <rows; j++) {
            transposed[i][j] = sum[j][i];
        }
    }
    printf("Transposed matrix= \n");
    for(int i=0;i<columns;i++){
        printf("|");
        for(int j=0;j<rows;j++){
            printf("%d|\t", transposed[i][j]);

        }
        printf("\n");
    }
    return 0;
}