Q4. Corrected Code:

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}


Q1. Bug in the Implementation:
Resets currentSum = 0 when negative — fails for all-negative arrays. currentSum should start at nums[0]

Q2. For all-negative arrays:
The code resets the sum to zero when negative, so it may skip important values.
It won’t always work correctly because the max sum in all-negative arrays is the largest negative number, not zero.

Q3. For input {-3, -2, -1, -4}:
The function returns -1, which is the biggest number in the array and the correct max subarray sum.

