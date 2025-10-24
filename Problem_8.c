#include<stdio.h>

int main()
{
    int x;

    scanf("%d", &x);

    int arr[x];
    for(int i = 0; i < x; i++){
        scanf("%d",&arr[i]);
    }


    for(int i = 0; i < x -1; i++){
            int min = i;
        for(int j = i + 1; j < x; j++){
                if(arr[j] < arr[min]){
                    min = j;
                }
        }
        int temp = arr[i];
        arr[i]= arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < x; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
