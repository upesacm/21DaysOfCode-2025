#include <stdio.h>

int maxSubarraySum(int nums[], int n) 
{
    // Handle empty array case
    if (n <= 0) return 0;
    
    int maxSum = nums[0];        // Maximum sum found so far
    int currentSum = nums[0];    // Current subarray sum
    
    // Start from index 1 since we've already considered nums[0]
    for (int i = 1; i < n; i++) 
    {
        // Either extend the existing subarray or start a new one
        currentSum = (currentSum > 0) ? currentSum + nums[i] : nums[i];
        
        // Update maximum if current sum is larger
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    
    return maxSum;
}

// Alternative implementation that's more explicit:
int maxSubarraySum_alternative(int nums[], int n) 
{
    if (n <= 0) return 0;
    
    int maxSum = nums[0];
    int currentSum = nums[0];
    
    for (int i = 1; i < n; i++) 
    {
        // If currentSum is negative, start new subarray from nums[i]
        if (currentSum < 0) 
        {
            currentSum = nums[i];
        }
        else
        {
            currentSum += nums[i];
        }
        
        // Update maximum sum if needed
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    
    return maxSum;
}