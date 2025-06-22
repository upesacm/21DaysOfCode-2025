#include <stdio.h>

int findMax(int arr[], int n)
{
    int max = arr[0];  // Initialize max to the first element

    for (int i = 1; i < n; i++)  // Start from index 1
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
    int arr[] = {10, 25, 47, 3, 98, 65};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = findMax(arr, n);
    printf("Maximum element in the array is: %d\n", maxElement);

    return 0;
}
