#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n <= 0) 
    {
        printf("Array size must be positive.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];
        }
    }

    printf("Minimum element is: %d\n", min);
    return 0;
}