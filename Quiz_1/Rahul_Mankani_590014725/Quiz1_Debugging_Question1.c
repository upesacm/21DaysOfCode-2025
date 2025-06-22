#include <limits.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = INT_MIN;   // issue: at first current sum was getting reset to 0 when array elemnts were negative  
    int currentSum = 0;    // flaw: max sum initialised to nums[0] might run even if we don't reset current sum
    for (int i = 0; i < n; i++) 
    {
        currentSum += nums[i];
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
        if (currentSum < 0) // flaw: the else if condition left the cases with all negative elements sub-arrays
        {                    // cases where array contains all -ve elements: the max sum will be incorrectly calculated.
            currentSum = 0; // reset currentSum if negative
        }
    }
    return maxSum;
}//int arr[] = {-3, -2, -1, -4}; Result= -1(maxSum)
