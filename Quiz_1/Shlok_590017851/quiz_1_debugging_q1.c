#include <stdio.h>
int maxSubarraySum(int nums[], int n)
{
    int currentSum = nums[0];
    int maxSum = nums[0];
    for (int i = 1; i < n; i++) 
    {
        if (currentSum + nums[i] > nums[i])
            currentSum += nums[i];
        else
            currentSum = nums[i];
        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}
