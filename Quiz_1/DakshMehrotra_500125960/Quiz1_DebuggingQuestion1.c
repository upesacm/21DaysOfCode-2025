/*
1. Bug / Logical Flaw: When currentSum turns negative, the original code resets it to 0. Because it never permits currentSum to accumulate the least negative value, this is ineffective for arrays that contain only negative numbers. In these situations, the function might not return the proper maximum (least negative) value.

2. All Negative Numbers: The largest (least negative) element in the array should be the right response if it is entirely composed of negative numbers. This might not always be returned by the original code.

3. For input: int arr[] = {-3, -2, -1, -4}; The function would return the first element, -3, but the largest element, -1, should be the right response.

4. Corrected Version: Start the loop from index 1 and initialise currentSum to the first element. Set currentSum to the highest of nums[i] and currentSum + nums[i] at each stage. Adjust maxSum appropriately. This is applicable in every situation.
*/

#include <stdio.h>

int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < n; i++)
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : (currentSum + nums[i]);
        maxSum = (maxSum > currentSum) ? maxSum : currentSum;
    }
    return maxSum;
}