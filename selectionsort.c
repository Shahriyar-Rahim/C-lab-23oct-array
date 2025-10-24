#include <stdio.h>

int main(){
    int x;

    printf("Enter the total number of elements: ");
    scanf("%d", &x);

    int arr[x];

    printf("Enter the elements: ");
    for(int i = 0; i < x; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < x -1; i++){
        int minIndex = i;
        for(int j = i + 1; j < x; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

    printf("Sorted array: ");
    for(int i = 0; i < x; i++){
        printf("%d ", arr[i]);
    }
        

    return 0;
}