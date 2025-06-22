#include <stdio.h>

/// @brief 
/// @return 
int main() 
{
    int n;
    
    // Input the size of the array 
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Checking if array size is valid
    if (n <= 0) 
    {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    
    // Declaring the array 
    int nums[n];
    
    // Input array elements 
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    // Getting first and last elements
    int first = nums[0];
    int last = nums[n - 1];
    
    printf("First element: %d\n", first);
    printf("Last element: %d\n", last);
    
    return 0;
}