#include <stdio.h>

int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (currentSum < 0)
            currentSum = nums[i];
        else
            currentSum += nums[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}

int main()
{
    int nums[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = maxSubarraySum(nums, n);
    printf("Maximum subarray sum is: %d\n", result);

    return 0;
}
