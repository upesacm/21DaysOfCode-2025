/*1.Bug:currentSum is equatl to zero,which fails for arrays with negative numbers.
    It will skip updating maxSum if all values are negative and currentSum keeps getting reset to 0.
2.For all negative numbers code incorrectly returns 0, which is not present in array and not correct maximum subarray sum.
3.Output for int arr[] = {-3, -2, -1, -4};:
  Returns 0 (incorrect).
  Correct = -1 (the least negative number).

4.  */
int maxSubarraySum(int nums[],int n) 
{
    int maxSum=nums[0];
    int currentSum=nums[0];
    for(int i=1;i<n;i++) 
    {
        currentSum=(currentSum+nums[i]>nums[i])?currentSum+nums[i]:nums[i];
        maxSum=(currentSum>maxSum)?currentSum:maxSum;
    }
    return maxSum;
}
