//1.the bug or logical flaw in this code-int currentSum = 0;
//2.Output: -3 Which is not the correct maximum sum subarray
//3. What would the function return for the input: int arr[] = {-3, -2, -1, -4};? --->> IT RETURN -3 BUT CORRECT ANSWER IS -1 
//4.
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        if (currentSum < 0)
            currentSum = nums[i];
        else
            currentSum += nums[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}
