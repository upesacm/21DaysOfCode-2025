#include <stdio.h>

// Corrected Kadane's Algorithm
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];  // Starting with the first element

    for (int i = 1; i < n; i++) 
    {
        // Deciding whether to extend the subarray or start a new one
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        
        // Updating maxSum if currentSum is larger
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int main() 
{
    int n;

    // Getting array size from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Reading array elements from user
    printf("Enter %d integers (space-separated): ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    // Computing and print the result
    int result = maxSubarraySum(nums, n);
    printf("Maximum subarray sum: %d\n", result);

    return 0;
}