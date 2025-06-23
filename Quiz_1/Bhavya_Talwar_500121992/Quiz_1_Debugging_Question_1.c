int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];
    int currentSum = 0; // Bug

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

// 1. Bugs
// int currentSum = 0;
// else if (currentSum < 0)
//     currentSum = 0;

// This logic resets currentSum to 0 if it becomes negative — which is correct only if there’s at least one positive number in the array.

// 2. Consider int arr[] = {-3, -2, -1, -4};
// The maximum subarray is -1 but the above algo returns -3.

// 3. The above algo returns -3.

// 4. Corrected version

// int maxSubarraySum(int nums[], int n)
// {
//     int maxSum = nums[0];
//     int currentSum = nums[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (currentSum + nums[i] > nums[i])
//             currentSum = currentSum + nums[i];
//         else
//             currentSum = nums[i];

//         if (currentSum > maxSum)
//             maxSum = currentSum;
//     }
//     return maxSum;
// }
