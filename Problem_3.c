#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    int ax[5] = {0};
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array1: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }



    printf("\nArray2: ");
    for(int i = 0; i < n; i++)
    {
      printf("%d ", ax[i]);
    }

    printf("\nCopying...\n ");
    for(int i =0; i < n; i++){
        ax[i] = arr[i];
    }

    for(int i = 0; i < n; i++)
    {
      printf("%d ", ax[i]);
    }

    return 0;
}
