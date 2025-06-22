#include <stdio.h>

/*
Task 1: Identify the bug or logical flaw in this code

In the original code, currentSum is initialized to 0.
This causes incorrect results when all elements are negative, because currentSum is reset to 0 whenever it's negative, and maxSum might never get updated to the actual largest negative number.
*/

/*
Task 2: Consider cases where the array contains all negative numbers

In an all-negative array like {-3, -2, -1, -4}, resetting currentSum to 0 causes all values to be ignored, and only the first element might be returned (not necessarily the maximum). This is incorrect.
*/

/*
Task 3: What would the function return for the input: int arr[] = {-3, -2, -1, -4};?

The original function would incorrectly return -3 because currentSum keeps resetting to 0 and never updates maxSum correctly. 
The correct answer should be -1 (the maximum subarray sum).
*/

/*
Task 4: Corrected version of the function that works for all arrays

Below is the fixed version that works for arrays with all negative, all positive, or mixed elements.
*/

int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        // Start new subarray at nums[i] if currentSum is negative
        currentSum = (currentSum > 0) ? (currentSum + nums[i]) : nums[i];

        // Update maxSum if currentSum is greater
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

//Example
int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum subarray sum is: %d\n", maxSubarraySum(arr, n));
    return 0;
}
