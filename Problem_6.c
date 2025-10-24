#include<stdio.h>

int main()
{
    int n, s;

    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

    }

    scanf("%d", &s);

    int isAvailabe = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == s){
            printf("Item %d is found at %d", arr[i], i);
            isAvailabe = 1;
            break;
        }
    }
    if(!isAvailabe)
            printf("Item not found!");

    return 0;
}
