int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];

    for (int i = 0; i < n; i++)
    {

        int currentSum = 0;
        for (int j = i; j < n; j++)
        {
            currentSum += nums[j];

            if (currentSum > maxSum)
            {
                maxSum = currentSum;
            }
            else if (currentSum < 0)
            {
                currentSum = 0;
            }
        }
    }

    return maxSum;
}

/*
[?] What would the function return for the input: int arr[] = {-3, -2, -1, -4};?
-> The function will return -1.

[?] Identify the bug or logical flaw in this code.
-> We have to iterate each subarray, but we were iterating the array as a whole.
*/
