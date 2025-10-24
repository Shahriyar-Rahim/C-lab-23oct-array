#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the dimension of the matrix [rows][cols]: ");
    scanf("%d %d", &x, &y);

    int arr[x][y];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int largest = arr[0][0];
    int rowIndex = 0, colIndex = 0;

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
                rowIndex = i;
                colIndex = j;
            }
        }
    }

    printf("The largest number is %d at index [%d][%d]\n", largest, rowIndex, colIndex);

    return 0;
}
