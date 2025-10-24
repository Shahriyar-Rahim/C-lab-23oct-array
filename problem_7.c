#include<stdio.h>

int main()
{
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], sum[rows][cols];

    printf("Enter the first matrix\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the second matrix\n");
     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){

            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
           sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Their sum is: \n");
     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", sum[i][j]);
        }
            printf("\n");
    }



    return 0;
}
