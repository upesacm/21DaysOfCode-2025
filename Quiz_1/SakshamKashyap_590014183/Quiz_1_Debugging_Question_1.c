/*Q.1 A student tries to implement a function that finds the maximum sum of any contiguous subarray within an integer array (Kadane's algorithm). Here's their code:

int maxSubarraySum(int nums[], int n)
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

Tasks:
1. Identify the bug or logical flaw in this code.

solution: the bug is here the currentSum is initialize to zero. here if entire array has negative number currentSum keeps resetting to 0, but the correct maximum subarray sum might be negative

2. Consider cases where the array contains all negative numbers.

solution: The correct maximum subarray sum should be -1. but But current code may return 0 incorrectly.

3. What would the function return for the input: int arr[] = {-3, -2, -1, -4};?

solution: -1

4. Suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements. 

*/
// correct version of code in python is:

#include <stdio.h>

int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        
        if (currentSum + nums[i] > nums[i])
            currentSum = currentSum + nums[i];
        else
            currentSum = nums[i];

    
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    return maxSum;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &nums[i]);
    }


    int result = maxSubarraySum(nums, n);

    printf("Maximum Subarray Sum is: %d\n", result);

    return 0;
}
