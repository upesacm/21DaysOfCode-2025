#include <stdio.h>
int strictlyIncreasing(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] <= arr[i - 1])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("size of an array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter %d elements:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    if (strictlyIncreasing(arr, size))
    {
        printf("The array is strictly increasing.");
    }
    else
    {
        printf("The array is not strictly increasing.");
    }
}