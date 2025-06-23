#include <stdio.h>

// Corrected function to find maximum element
int findMax(int arr[], int n) 
{
    int max = arr[0];  // Initializing with first element
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
    int n;

    // Getting array size from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Reading array elements from user
    printf("Enter %d integers (space-separated): ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Computing and print the maximum
    int result = findMax(arr, n);
    printf("Maximum element: %d\n", result);

    return 0;
}