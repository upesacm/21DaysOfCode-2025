#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int arr[], int n) 
{
    if (n <= 1) return true;
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] <= arr[i-1]) 
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Invalid size.\n");
        return 1;
    }
    if (n == 0) 
    {
        printf("Array is strictly increasing: true\n");
        return 0;
    }

    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    if (isStrictlyIncreasing(arr, n)) 
    {
        printf("Array is strictly increasing: true\n");
    } 
    else 
    {
        printf("Array is strictly increasing: false\n");
    }
    return 0;
}