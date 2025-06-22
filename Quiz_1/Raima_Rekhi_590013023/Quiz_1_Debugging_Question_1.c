//1. The logical flaw in the given code snippet is that:
//int currentSum = 0; when it should be int currentSum = nums[0];
//and, for (int i = 0; i < n; i++),here i should be 1 not zero
//also,if (currentSum > maxSum) {maxSum = currentSum;},this loop is incorrect it should be: if (currentSum + nums[i] > nums[i]) currentSum += nums[i];
//this is also incorrect as it does not account for negative elements of the array if present: else if (currentSum < 0) {currentSum = 0;} 
//2. The given snippet will fail because of this:else if (currentSum < 0) {currentSum = 0;}
//3. Answer: Maximum subarray sum is: -1

//4. Suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements
#include <stdio.h>
int maxSubarraySum(int nums[],int n);
int main(){
int n;

printf("Enter the size of the array:\n");
scanf("%d",&n);
int nums[n];

// Prompt the user to enter the elements of the array
printf("Enter the elements of the array:\n");
for(int i=0;i<n;++i){
scanf("%d",&nums[i]);
}

int result=maxSubarraySum(nums,n);
printf("Maximum subarray sum is: %d\n",result);
return 0;
}

int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        if (currentSum + nums[i] > nums[i])
            currentSum += nums[i];
        else
            currentSum = nums[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}

