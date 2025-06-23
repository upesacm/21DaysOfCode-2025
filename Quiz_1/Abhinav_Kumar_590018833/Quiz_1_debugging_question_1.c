#include <stdio.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    //here the initialization of current sum was wrong in place of currentSum=0 it should be currentSum=nums[0].
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
    int arr1[] = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Maximum subarray sum (Example 1): %d\n", maxSubarraySum(arr1, n1));
    int arr2[] = {-3, -2, -1, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Maximum subarray sum (Example 2 - all negative): %d\n", maxSubarraySum(arr2, n2));
    return 0;
}
