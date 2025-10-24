#include<stdio.h>

int main()
{
    int rows, cols;

    scanf("%d %d", &rows, &cols);
    int a[rows][cols];

    printf("Enter the first matrix\n");
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    int r2, c2, z;
    printf("Enter the dimensions of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    int b[r2][c2], sum[r2][c2];

    printf("Enter the second matrix\n");
     for(int i = 0; i < r2; i++){
        for(int j = 0; j < c2; j++){
                
                    scanf("%d", &b[i][j]);
                
        }
        printf("\n");
    }

     for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
                
                    sum[i][j] = a[i][j] * b[i][j];
                
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

