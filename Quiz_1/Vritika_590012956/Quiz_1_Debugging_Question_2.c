// Bug Identification :
// Incorrect: int max;
// Correct: int max = arr[0];

// Incorrect Behaviour:
// The function may return incorrect results because max is not initialized and holds a garbage value.

// Corrected code:
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

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int maximum = findMax(arr, n);
    printf("The maximum element is: %d\n", maximum);
    return 0;
}
