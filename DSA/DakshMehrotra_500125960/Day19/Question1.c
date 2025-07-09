#include <stdio.h>

int search(int arr[], int n, int target) 
{
    int left = 0;
    int right = n - 1;
    
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) 
        {
            return mid;
        }
        
        if (arr[left] <= arr[mid]) 
        {
            if (arr[left] <= target && target < arr[mid]) 
            {
                right = mid - 1;
            } 
            else 
            {
                left = mid + 1;
            }
        } 
        else 
        {
            if (arr[mid] < target && target <= arr[right]) 
            {
                left = mid + 1;
            } 
            else 
            {
                right = mid - 1;
            }
        }
    }
    
    return -1;
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
    
    printf("Enter %d integers (rotated sorted array):\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }
    
    printf("Enter the target value to search: ");
    if (scanf("%d", &target) != 1) 
    {
        printf("Invalid target input.\n");
        return 1;
    }
    
    int result = search(arr, n, target);
    
    if (result != -1) 
    {
        printf("Target found at index: %d\n", result);
    } 
    else 
    {
        printf("Target not found in the array.\n");
    }
    
    return 0;
}