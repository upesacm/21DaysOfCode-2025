#include <stdio.h>

int findMax(int arr[], int n) 
{
    int max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[] = {4, 15, 7, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum element: %d\n", findMax(arr, n));
    return 0;
}
