// Bug:
Incorrectly resets currentSum to 0 → fails for all-negative numbers.

  // All Negative Number:
  The current code will give wrong results in some cases because it ignores valid negative numbers.

  //Output for {-3, -2, -1, -4}:
Returns -1 

  // Corrected Code:
  #include <stdio.h>

// Function to find the maximum subarray sum
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        if (currentSum + nums[i] > nums[i])
            currentSum = currentSum + nums[i];
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
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubarraySum(arr, n);
    printf("Maximum Subarray Sum: %d\n", maxSum);
    return 0;
}
