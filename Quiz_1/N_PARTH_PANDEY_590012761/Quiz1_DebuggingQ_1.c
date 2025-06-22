//Bug:
//int currentSum = 0;


//Logic:
/*
if (currentSum < 0) {
    currentSum = 0;
}
*/


//For arr of negative numbers:
//int arr[] = {-3, -2, -1, -4};
//Actually, with this code, it does work for this case, but it’s unintentionally correct, because maxSum is initialized with nums[0], and currentSum updates may pick -2 and -1 at later iterations before being reset.

//Function return for the input: int arr[] = {-3, -2, -1, -4};
// O/P: -1

//Corrected version:
int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        if (currentSum + nums[i] > nums[i])
            currentSum = currentSum + nums[i];
        else
            currentSum = nums[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}

    

