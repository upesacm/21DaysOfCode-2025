#TASK 1
'''
The code initializes currentSum to 0 and resets it to 0 whenever it becomes negative. 
This works fine for arrays with non-negative numbers but fails for arrays containing all negative numbers, 
where resetting to 0 causes potentially larger (less negative) subarrays to be ignored.
'''

#TASK 2
'''
In all-negative arrays (e.g., {-5, -2, -8}), resetting currentSum to 0 skips all elements, 
and the logic may incorrectly retain the first element as maxSum, even if a later element is less negative and should be chosen. 
This leads to incorrect results in some cases.
'''

#Task 3
'''
The function would return -1, which is correct for this specific input since -1 is the maximum (least negative) number.
'''

#TASK 4
'''
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }
    return maxSum;
}
'''
