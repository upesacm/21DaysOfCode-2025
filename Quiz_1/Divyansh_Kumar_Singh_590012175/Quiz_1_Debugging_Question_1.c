// Q4. Corrected Code
#include <stdio.h>  // For NULL

int maxSubarraySum(int nums[], int n)
{
    if (nums == NULL || n <= 0) {  // Invalid input handling
        return 0;
    }

    int maxSum = nums[0];

    for (int i = 0; i < n; i++)
    {

        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += nums[j];

            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            else if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
    }
    return maxSum;
}

/*
Q1. Identify the bug or logical flaw in this code.
-> We have to iterate each subarray, but we were iterating the array as a whole.

Q2. Consider cases where the array contains all negative numbers.
-> int arr[] = {-3, -2, -1, -4};
   The function will return -1.

Q3. What would the function return for the input: int arr[] = {-3, -2, -1, -4};?
-> The function will return -1.

*/
```
