int maxSubarraySum(int nums[], int n)
{
    if (n == 0) return 0;

    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++)
    {
        currentSum = (currentSum > 0) ? currentSum + nums[i] : nums[i];
        if (currentSum > maxSum)
        {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
