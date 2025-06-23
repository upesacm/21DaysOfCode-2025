#include <stdio.h>

int findMax(int arr[], int n) 
{
    int max =arr[0]; // Initialize with the first element otherwise it will be returning the garbage value.
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}

int main() 
{
    int arr[] = {3, 7, 2, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxValue = findMax(arr, size);
    printf("Maximum element is: %d\n", maxValue);
    return 0;
}
