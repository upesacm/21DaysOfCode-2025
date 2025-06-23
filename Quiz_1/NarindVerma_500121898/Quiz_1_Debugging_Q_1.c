//GIVEN_CODE

/*int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 0; i < n; i++) 
    {
        currentSum += nums[i];
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
        else if (currentSum < 0) 
        {
            currentSum = 0;
        }
    }
    return maxSum;
}

//TASKS
'''
1. Identify the bug or logical flaw:
        Initializing currentSum = 0 is fine only if the array has at least one non-negative number.
        For all-negative arrays, currentSum will reset to 0 repeatedly, and maxSum will not update correctly unless nums[0] is already the largest negative number.

2. Consider cases with all negative numbers:
        For input {-3, -2, -1, -4}, the current code returns 0, which is incorrect because there is no positive subarray. It should return -1 (the least negative number / max of all negatives).

3. What would the function return for input:
        int arr[] = {-3, -2, -1, -4};
            Incorrect Output: 0
            Expected Output: -1*/
#include <stdio.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }
    return maxSum;
}

int main() 
{
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n);
    printf("Maximum Subarray Sum: %d\n", result);

    return 0;
}
