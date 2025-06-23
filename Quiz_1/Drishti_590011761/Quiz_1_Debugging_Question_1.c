#include <stdio.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maxSubarraySum(arr, n);
    printf("Maximum Subarray Sum: %d\n", result);
    return 0;
}
