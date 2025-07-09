#include <stdio.h>

int main() 
{
    int n, target;
    
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
    
    printf("Enter the target element to search for: ");
    if (scanf("%d", &target) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    int foundIndex = -1;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            foundIndex = i;
            break;
        }
    }
    
    if (foundIndex != -1) 
    {
        printf("Target found at index: %d\n", foundIndex);
    } 
    else 
    {
        printf("Target not found in the array.\n");
    }
    
    return 0;
}