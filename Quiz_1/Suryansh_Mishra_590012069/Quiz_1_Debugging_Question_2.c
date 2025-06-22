#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

// Method 1: Initialize max with first array element (Recommended)
int findMax(int arr[], int n) 
{
    // Handle edge case of empty array
    if (n <= 0) {
        // Return some error value or handle appropriately
        // This depends on your specific requirements
        return INT_MIN; // or throw an error
    }
    
    int max = arr[0];  // Initialize with first element
    
    // Start loop from index 1 since we already considered arr[0]
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    return max;
}

// Method 2: Initialize with a very small value
int findMax_alternative(int arr[], int n) 
{
    if (n <= 0) {
        return INT_MIN; // Error case
    }
    
    int max = INT_MIN;  // Initialize with smallest possible integer
    
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    return max;
}

// Method 3: More robust version with error handling
bool findMax_safe(int arr[], int n, int* result) 
{
    if (n <= 0 || arr == NULL || result == NULL) {
        return false; // Invalid input
    }
    
    *result = arr[0];
    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > *result) 
        {
            *result = arr[i];
        }
    }
    
    return true; // Success
}