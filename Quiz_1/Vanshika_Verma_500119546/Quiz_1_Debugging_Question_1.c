// TASK 1   
// currentSum should start as first element of the array and not as 0
// critical when all elements are -ve coz resetting currentSum to 0 will ignore less -ve values

// TASK 2 
// When all elements are -ve , code resets currentSum to 0 every time it goes -ve. But if all number are -ve then
// - currentSum will always be reset to 0
// -  maxSum will be updated only once to nums[0] and never again
// - so the funct might return 0, which is incorrect, coz the maximum subarray sum should be the largest (least -ve) number and not 0.
// For example {-5, -2, -3, -1} here expected result is -1 but it is returning 0 , which is a issue.

// TASK 3  
// Function will return-> -1  

// TASK 4 -  Suggest a corrected version of this function 
#include <stdio.h>
// this func handles all input cases including-  +ve and -ve and zeros 
int maxSubarraySum(int nums[], int n) {
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
    int arr[] = {-3, -2, -1, -4};  // ans will be -1 but the code given on google forms is giving -2 as output
    int n = sizeof(arr) / sizeof(arr[0]);
    int res = maxSubarraySum(arr, n);
    printf("Max subarray sum-  %d\n", res);
    return 0;
}
