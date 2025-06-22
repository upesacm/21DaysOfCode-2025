 1. Identify the bug or logical flaw in this code  
 BUG:- The code works fine when there are positive numbers in the array but the main issue comes up when all the elements are negative.
this line:
else if (currentSum < 0)
    currentSum = 0;
makes currentSum to reset to 0 whenever it goes negative. This makes the code return 0 even when all subarray sums are negative — which is not valid because 0 is not part of the array.

2. Consider cases where the array contains all negative numbers.
  let us assume an array, arr[] = {-3, -2, -1, -4}
The function would return 0, but that’s wrong. The maximum subarray here is {-1}, so the answer should be -1.

3. What would the function return for the input: int arr[] = {-3, -2, -1, -4};? 
"-1" (maximum subarray is {-1})

4. suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements.
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];      

    for (int i = 1; i < n; i++) 
    {
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            currentSum = nums[i];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        } 

    return maxSum;
    } 

  
