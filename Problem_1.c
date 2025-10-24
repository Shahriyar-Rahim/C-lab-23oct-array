#include<stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Initial array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    arr[2] = 10;

    printf("\nFinal array: ");
    for(int i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }
    return 0;
}
