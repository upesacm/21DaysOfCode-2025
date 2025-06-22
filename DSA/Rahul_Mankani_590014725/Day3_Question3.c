#include <stdio.h>

int SecondMax(int arr[], int n) 
{
    if(n < 2) 
    {
        return -1;
    }
    int max = arr[0];
    int second = -1;
    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            second = max;
            max = arr[i];
        }
        else if(arr[i] < max && (second == -1 || arr[i] > second)) 
        {
            second = arr[i];
        }
    }
    return second;
}

int main() 
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int result = SecondMax(arr, n);
    if(result == -1) 
    {
        printf("No second largest element exists: -1\n");
    } 
    else 
    {
        printf("Second largest element: %d\n", result);
    }
    return 0;
}
