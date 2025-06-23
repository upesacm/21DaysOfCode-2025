int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < n; i++)
    {
        currentSum += nums[i];
        if (currentSum < nums[i])
        {
            currentSum = nums[i];
        }
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}
