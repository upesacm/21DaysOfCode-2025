/*  1. Bug or logical flaw in the code:
    The flaw lies in the initialization of currentSum to 0. This works fine when the array has at least one non-negative number. But when all 
    elements are negative, the code ends up setting currentSum to 0 every time it dips below zero, which means it ignores subarrays made up 
    solely of negative numbers.

    2. Case with all negative numbers:
    In arrays with all negative elements, the logic of resetting currentSum to 0 fails to retain meaningful subarray sums. The function 
    unintentionally returns the maximum between negative numbers and 0—even though 0 doesn't exist as a valid subarray sum in such cases.

    3. What would the function return for int arr[] = {-3, -2, -1, -4};?

    Start: maxSum = -3, currentSum = 0

    i = 0: currentSum = -3, maxSum remains -3, reset currentSum = 0
    i = 1: currentSum = -2, update maxSum = -2, reset currentSum = 0
    i = 2: currentSum = -1, update maxSum = -1, reset currentSum = 0
    i = 3: currentSum = -4, no update
    So the function would return -1, which is correct here—but it happens to work by accident, not by design.
   
    4. Corrected Version of the Function*/

#include <stdio.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

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

int main() 
{
    int arr[] = {-3, -2, -1, -4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, size);
    printf("Maximum Subarray Sum: %d\n", result);

    return 0;
}
