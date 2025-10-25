#include<stdio.h>

int main()
{
    int x;
    printf("Enter the total number of elements: ");
    scanf("%d", &x); // input array size

    int arr[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&arr[i]); // input array elements
    }

    // Bubble Sort logic
    for(int i = 0; i < x - 1; i++){
        for(int j = 0; j < x - 1 - i; j++){
            if(arr[j] > arr[j + 1]){ // swap if out of order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array using Bubble Sort: ");
    for(int i = 0; i < x; i++){
        printf("%d ", arr[i]); // print sorted array
    }

    return 0;
}
