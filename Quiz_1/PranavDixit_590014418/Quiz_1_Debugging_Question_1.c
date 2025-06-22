#include <stdio.h>

int maxSubarraySum(int nums[], int n) {
    // Start with the first element
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        // Decide whether to start fresh or continue the current subarray
        if (currentSum + nums[i] > nums[i]) {
            currentSum += nums[i];
        } else {
            currentSum = nums[i];
        }

        // Update maxSum if needed
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = maxSubarraySum(arr, n);
    printf("Maximum subarray sum: %d\n", result); // Output should be -1

    return 0;
}

/*
1. Original issue: Loop started at i = 0 with currentSum = 0, causing double counting.
2. Also, setting currentSum to 0 breaks the logic for all-negative arrays.
3. For example input {-3, -2, -1, -4}, the function now correctly returns -1.
4. Fix: Initialize currentSum and maxSum with nums[0], start loop from i = 1.
*/
