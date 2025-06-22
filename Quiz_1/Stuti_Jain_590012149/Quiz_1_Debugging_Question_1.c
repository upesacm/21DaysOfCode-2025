int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];                                      
    int currentSum = nums[0];                                  //bug fixed (Currentsum initialized with nums[0] instead of 0)

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

 //since maxsum has been set to nums[0], ie the first element of the array, if we take {{-3, -2, -1, -4}, the value=-3
//corrected version of the code
 int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];                                      
    int currentSum = nums[0];                                  //bug fixed (Currentsum initialized with nums[0] instead of 0)

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

//corrected version of the code
