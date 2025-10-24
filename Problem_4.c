#include<stdio.h>
//make an array, take input from user and make sum of the array and print the avg
int main()
{
    int n, sum = 0;
    float avg = 0;

    printf("Enter the total number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum = %d", sum);

    avg = (float)sum / n;

    //printf("\nYour entered numbers are: ");
    //for(int i = 0; i < n; i++)
   // {
    //    printf("%d ", a[i]);
    //}//
    printf("\nAverage c= %.2f", avg);

    return 0;
}

