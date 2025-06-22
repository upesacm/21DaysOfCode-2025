#include <stdio.h>
#include <stdlib.h>

// Function to find duplicate using Floyd's Tortoise and Hare algorithm
int findDuplicate(int* nums, int numsSize) 
{
    // Phase 1: Finding the intersection point
    int tortoise = nums[0];
    int hare = nums[0];
    
    do 
    {
        tortoise = nums[tortoise];
        hare = nums[nums[hare]];
    } while (tortoise != hare);
    
    // Phase 2: Finding the entrance to the cycle
    tortoise = nums[0];
    while (tortoise != hare) 
    {
        tortoise = nums[tortoise];
        hare = nums[hare];
    }
    
    return hare;
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
    
    int* nums = (int*)malloc((n + 1) * sizeof(int));
    printf("Enter %d numbers between 1 and %d :\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) 
    {
        scanf("%d", &nums[i]);
        // Validate input is within range
        if (nums[i] < 1 || nums[i] > n) 
        {
            printf("Invalid number! Must be between 1 and %d.\n", n);
            free(nums);
            return 1;
        }
    }
    
    int duplicate = findDuplicate(nums, n + 1);
    printf("Duplicate number found: %d\n", duplicate);
    
    free(nums);
    return 0;
}