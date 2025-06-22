#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to check if array is strictly increasing
bool isStrictlyIncreasing(int* nums, int numsSize) 
{
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] <= nums[i-1]) 
        {
            return false;
        }
    }
    return true;
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
    
    bool result = isStrictlyIncreasing(nums, n);
    
    if (result) 
    {
        printf("The array is strictly increasing.\n");
    } 
    else 
    {
        printf("The array is NOT strictly increasing.\n");
    }
    
    free(nums);
    return 0;
}