#include<stdio.h>

int main()
{
    int x, y;
    printf("Enter the array size: ");
    scanf("%d %d", &x, &y);

    int arr[x][y];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Flatten 2D array to 1D
    int flat[x*y], k = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            flat[k++] = arr[i][j];
        }
    }

    // Bubble sort the 1D array
    for(int i = 0; i < k - 1; i++){
        for(int j = 0; j < k - 1 - i; j++){
            if(flat[j] > flat[j + 1]){
                int temp = flat[j];
                flat[j] = flat[j + 1];
                flat[j + 1] = temp;
            }
        }
    }

    // Refill into 2D array
    k = 0;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            arr[i][j] = flat[k++];
        }
    }

    // Print sorted 2D array
    printf("Completely Sorted 2D array:\n");
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
