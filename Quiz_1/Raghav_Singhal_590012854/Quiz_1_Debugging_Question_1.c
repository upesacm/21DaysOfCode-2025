#include<stdio.h>
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = 0;
    // int currentSum = 0;

    for (int i = 0; i < n; i++) 
   {
        if(nums[i]>=0)
        maxSum += nums[i];
    //     if (currentSum > maxSum) 
    //    {
    //         maxSum = currentSum;
    //     }
    //      else if (currentSum < 0) 
    //    {
    //         currentSum = 0;
    //     }
    }
    return maxSum;
}
void main()
{
    int a[]={-1,-2,-3,-4,-5};
    printf("%d",maxSubarraySum(a,5));
}