1. Identify the bug or logical flaw in this code:

The bug in the code lies in how currentSum is initialized and reset:

int currentSum = 0;
...
else if (currentSum < 0)
{
    currentSum = 0;
}
This logic fails for arrays that contain only negative numbers. Since currentSum is reset to 0 whenever it's negative, the algorithm would incorrectly return 0 as the maximum sum — even though all actual subarray sums are negative.

2. Consider cases where the array contains all negative numbers:

For arrays like {-3, -2, -1, -4}, the code resets currentSum to 0 at every step. This causes maxSum to never be updated after initialization. Hence, the function would incorrectly return the initial element nums[0] or 0, instead of the actual maximum subarray sum which should be the largest (least negative) number in the array.

3. What would the function return for the input int arr[] = {-3, -2, -1, -4};?

Current Output:
The function would return -3, as it initializes maxSum = nums[0] and then resets currentSum to 0 at each step due to all values being negative. It never updates maxSum.

Expected Correct Output:
The correct answer is -1, the largest number among the negative values (i.e., maximum subarray is just {-1}).

4. Corrected Version of the Function:

Here is a corrected version of Kadane’s Algorithm that works for all types of arrays, including those with all negative elements:

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
Explanation of Fix:

currentSum is initialized to nums[0] to handle negative-only arrays.
At each step, currentSum is updated by comparing:
Starting a new subarray at nums[i]
Or extending the previous subarray
This avoids resetting to zero and ensures correct behavior even if all elements are negative.
