#include <stdio.h>

// Task 1: Bug - currentSum was initialized to 0 and reset to 0 when negative.
// This fails in cases where all elements are negative because it discards valid values.

// Task 2: In arrays with all negative numbers, resetting currentSum to 0 results in incorrect behavior.

// Task 3: For input {-3, -2, -1, -4}, the original function returns -1 by coincidence, not logic.

// Task 4: Fixed by initializing currentSum = nums[0] and starting the loop from index 1.
// We also update currentSum to be the maximum of (currentSum + nums[i]) and nums[i],
// ensuring the best local maximum is carried forward.

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }
    return maxSum;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum subarray sum is: %d\n", maxSubarraySum(arr, n));
    return 0;
}
