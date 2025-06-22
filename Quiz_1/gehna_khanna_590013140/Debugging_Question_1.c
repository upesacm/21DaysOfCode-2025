//int currentSum = 0;   currentSum starts from 0. 
//maxSum remains -3.But the real answer should be -1.
//It returns: -3 but Correct answer: -1
int maxSubarraySum(int nums[], int n) 
{
    int currentSum = nums[0];
    int maxSum = nums[0];

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

