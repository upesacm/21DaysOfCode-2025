#include <stdio.h>

int min(int arr[], int size) 
{
    int min = arr[0];
    for(int i = 1; i < size; i++) 
    {
        if(arr[i] < min) 
        {
            min = arr[i];
        }
    }
    return min;
}
int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if(n <= 0) 
    {
        printf("Please enter a valid size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) 
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int minimum = min(arr, n);
    printf("The minimum element is: %d\n", minimum);
    return 0;
}
