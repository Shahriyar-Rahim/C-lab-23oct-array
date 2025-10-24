#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and cols for first matrix: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols];

    printf("Enter the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int r2, c2;
    printf("Enter rows and cols for second matrix: ");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2];

    if (cols != r2) {
        printf("Matrix multiplication not possible! Columns of first must equal rows of second.\n");
        return 1;
    }

    printf("Enter the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    int result[rows][c2];
    // Initialize result matrix to zero
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication logic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < cols; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
