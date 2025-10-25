#include<stdio.h>

int main()
{
    int x;
    printf("Enter the array size: ");
    scanf("%d", &x); // input array size

    int arr[x][x];
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            scanf("%d", &arr[i][j]); // input array elements
        }
    }

    // Bubble Sort logic for 2D array
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x - 1; j++){
            if(arr[i][j] > arr[i][j + 1]){ // swap if out of order
                int temp = arr[i][j];
                arr[i][j] = arr[i][j + 1];
                arr[i][j + 1] = temp;
            }
        }
    }

    printf("Sorted array using Bubble Sort: ");
    for(int i = 0; i < x; i++){
        for(int j = 0; j < x; j++){
            printf("%d ", arr[i][j]); // print sorted array
        }
        printf("\n");
    }

    return 0;
}
