/*
   1)  the original code sets the currentSum to 0 if currentSum < 0 (negative) which makes the code logic incorrect for the arrays which contain only negative numbers.
   2) In case of all neagative numbers the output should be the least negative number, but the original code does not do so.
   3) for the original code the function will return -3 but the correct code should return -1 
*/

// 4)
#include<stdio.h>

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
   {
        if(currentSum > 0)
        currentSum += nums[i];
        else
        currentSum = nums[i];

        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }    
    }
    return maxSum;
}

int main()
{
    int nums[] = {-3, -2, -1, -4};
    int n = sizeof(nums)/sizeof(nums[0]);
    printf("%d", maxSubarraySum(nums, n));

    return 0;
}
