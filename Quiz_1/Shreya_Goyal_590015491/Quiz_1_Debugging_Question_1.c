#include <stdio.h>

int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 1; i < n; i++) 
   {
        currentSum += nums[i];
        if (currentSum < 0) 
       {
            currentSum = 0;
        }
        if (currentSum < maxSum) 
       {
            currentSum = nums[i];
        }
    }
    return maxSum;

}