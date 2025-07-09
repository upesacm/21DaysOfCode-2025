#include <stdio.h>
#include <stdbool.h>

bool is_sorted(int arr[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < arr[i-1]) 
        {
            return false;
        }
    }
    return true;
}

int first_occurrence(int arr[], int n, int target) 
{
    int left = 0;
    int right = n - 1;
    int result = -1;
    
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) 
        {
            result = mid;
            right = mid - 1;
        } 
        else if (arr[mid] < target) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    return result;
}

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
    
    printf("Enter %d sorted integers in ascending order:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }
    
    if (!is_sorted(arr, n)) 
    {
        printf("Error: The array is not sorted in ascending order.\n");
        return 1;
    }
    
    printf("Enter the target value to search: ");
    if (scanf("%d", &target) != 1) 
    {
        printf("Invalid target input.\n");
        return 1;
    }
    
    int result = first_occurrence(arr, n, target);
    
    if (result != -1) 
    {
        printf("First occurrence of target at index: %d\n", result);
    } 
    else 
    {
        printf("Target not found in the array.\n");
    }
    
    return 0;
}