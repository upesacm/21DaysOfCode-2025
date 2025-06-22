/*
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = 0;

    for (int i = 0; i < n; i++) 
   {
        currentSum += nums[i];
        if (currentSum > maxSum) 
       {
            maxSum = currentSum;
        }
         else if (currentSum < 0) 
       {
            currentSum = 0;
        }
    }
    return maxSum;
}
*/
// T1: Logical flaw or the bug is that we're initializing currentSum with 0 not with the first element of the array. After doing that we would also have to change i=1, or we would just be doubling the first element.
// T2: When we enter an array of negative integers that is when it might fail as we're intilazing with 0  instead of the first element of the array.
// T3: When we enter {-3,-2,-1,-4} , it gives us the incorrect output somehow which is -2 , but the correct output should be -1 as its the maxSubarray.
// T4: Fixed Code:
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum += nums[i];
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
        else if (currentSum < 0) 
        {
            currentSum = 0;
        }
    }
    return maxSum;
}
