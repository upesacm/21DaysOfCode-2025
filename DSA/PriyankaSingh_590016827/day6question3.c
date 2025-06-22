#include <stdio.h>
#include <stdlib.h>

int longestConsecutiveIncreasingSubarray(int* nums, int numsSize) 
{
    if (numsSize == 0) return 0;
    
    int maxLength = 1;  // Minimum length is 1 (single element)
    int currentLength = 1;
    
    for (int i = 1; i < numsSize; i++) 
    {
        if (nums[i] == nums[i-1] + 1) 
        {
            currentLength++;
            if (currentLength > maxLength) 
            {
                maxLength = currentLength;
            }
        } 
        else 
        {
            currentLength = 1;  // Reseting counter
        }
    }
    
    return maxLength;
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
    
    int length = longestConsecutiveIncreasingSubarray(nums, n);
    printf("Length of longest consecutive increasing subarray: %d\n", length);
    
    free(nums);
    return 0;
}