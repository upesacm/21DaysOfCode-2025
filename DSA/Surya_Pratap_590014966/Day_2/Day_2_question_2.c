#include <stdio.h>

void firstAndLast(int[], int);

int main()
{

    int arr[] = {3, 5, 2, 8};
    int length = sizeof(arr) / sizeof(arr[0]);

    firstAndLast(arr, length);

    return 0;
}

void firstAndLast(int arr[], int length)
{

    int first = arr[0];
    int last = arr[length - 1];

    printf("First: %d, Last: %d", first, last);
}