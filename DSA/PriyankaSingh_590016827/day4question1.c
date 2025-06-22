#include <stdio.h>
#include <stdlib.h>
#include <limits.h> // For INT_MAX constant

// Function to find the minimum element in an array
int findMin(int* nums, int numsSize) 
{
    if (numsSize == 0) 
    {
        printf("Array is empty!\n");
        return INT_MAX; // Returning a special value for empty array
    }

    int min = nums[0]; // Initializing min with first element
    
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] < min) 
        {
            min = nums[i]; // Updating min if current element is smaller
        }
    }
    
    return min;
}

int main() 
{
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Invalid array size!\n");
        return 1;
    }
    
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    int min = findMin(nums, n);
    
    if (min != INT_MAX) 
    {
        printf("The minimum element in the array is: %d\n", min);
    }
    
    free(nums);
    return 0;
}