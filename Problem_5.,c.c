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

    int largest = arr[0], smallest = arr[0];
    int largestIndex = 0, smallestIndex = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            largestIndex = i;
        }
        if(arr[i] < smallest){
            smallest = arr[i];
            smallestIndex = i;
        }
    }
        printf("The largest number %d at index %d\n", largest, largestIndex);
        printf("The smallest number %d at index %d", smallest, smallestIndex);

    return 0;
}
