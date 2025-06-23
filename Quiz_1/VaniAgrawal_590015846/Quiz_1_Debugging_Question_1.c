//Question1
//  the error was in this part
// else if (currentSum < 0)
// {
//     currentSum = 0;
// }
//This works only when there's at least one non-negative number in the array.But when all numbers are negative, this reset causes currentSum to become 0 repeatedly, and the algorithm misses the actual maximum (least negative) number.

//Question2
//when all the number are negative the answer will be 0

//Question3
// the correct answer will be -1 but the code will return -3 which is wrong 

//Questionn4 
// correct code 

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
