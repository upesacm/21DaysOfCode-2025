#include <stdio.h>

int main() 
{
    int n;
    
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid size. Size must be a positive integer.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }
    
    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    printf("The maximum element in the array is: %d\n", max);
    
    return 0;
}