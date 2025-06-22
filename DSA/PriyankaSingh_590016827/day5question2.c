#include <stdio.h>
#include <stdlib.h>

// Function to find the missing number using sum approach
int findMissingNumber(int* nums, int numsSize) 
{
    // Calculating expected sum of numbers from 0 to n
    int expectedSum = numsSize * (numsSize + 1) / 2;

    // Calculating actual sum of numbers in array
    int actualSum = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        actualSum += nums[i];
    }
    
    // The missing number is the difference
    return expectedSum - actualSum;
}

int main() 
{
    int n;
    
    printf("Enter the value of n : ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Invalid value of n! Must be positive.\n");
        return 1;
    }
    
    int* nums = (int*)malloc(n * sizeof(int));  // Array size is n (contains 0..n with one missing)
    printf("Enter %d distinct numbers from 0 to %d :\n", n, n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    int missing = findMissingNumber(nums, n);
    printf("The missing number is: %d\n", missing);
    
    free(nums);
    return 0;
}