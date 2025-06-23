// TASK 1 -  Identify the bug or logical flaw in this code  
// 1. currentSum should start as the first element of the array, not as 0
// 2. critical when all elements are negative because resetting currentSum to 0 will ignore less negative values






// TASK 2 - Consider cases where the array contains all negative numbers 
// When all elements are negative, the code resets currentSum to 0 every time it goes negative. But if all numbers are negative, then - 
// 1. currentSum will always be reset to 0
// 2. maxSum will be updated only once to nums[0], and never again
// 3. so the function might return 0, which is incorrect, because the maximum subarray sum should be the largest (least negative) number, not zero.
// For example {-3, -2, -1, -4} - for this array expected result is -1 but it is returning -2 , which is a issue.





// TASK 3 - What would the function return for the input: int arr[] = {-3, -2, -1, -4};? 
// Function will return :- -2
// This should return -1 instead of -2.
     





// TASK 4 -  Suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements 
#include <stdio.h>
// this func handles all input cases including : +ve , -ve and zeros 
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
    int arr[] = {-3, -2, -1, -4}; // ans will be -1 but the code given on google forms is giving -2 as output.
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = maxSubarraySum(arr, n);
    printf("Maximum subarray sum: %d\n", result);
    return 0;
}
