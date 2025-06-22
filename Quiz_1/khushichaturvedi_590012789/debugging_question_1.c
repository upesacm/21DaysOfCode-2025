Tasks:
1.  Identify the bug or logical flaw in this code  
2. Consider cases where the array contains all negative numbers 
3. What would the function return for the input: int arr[] = {-3, -2, -1, -4};? 
4. Suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements

#include <stdio.h>
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];
    for (int i = 1; i < n; i++) 
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i]; 
        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}
int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum Subarray Sum: %d\n", maxSubarraySum(arr, n));
    return 0;
}
