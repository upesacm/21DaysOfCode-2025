//Task 1
Initial value of currentSum is set to 0.

This works only if there is at least one non-negative number.

If all elements are negative, the code resets currentSum to 0 every time, and maxSum is never updated correctly.

//Task 2
The function fails to keep the maximum of negative numbers, it only returns the first element of the array.

//Task 3
-2

//Task 4
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
