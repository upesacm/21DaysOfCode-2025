//Code by SakshamDwivedi_590013147
#include <stdio.h>

int maxSubarraySum(int[], int);

int arr[] = {-3, -2, -1, -4};

int main(){
    int maxSum = maxSubarraySum(arr, 4);
    printf("%d", maxSum);
    return 0;
}
//Fixes I made :
//current sum will be nums[0] not 0 otherwise it will reset to 0.
//Start loop with index 1
//We check whether if the currentSum is less than 0, if it is then it is reset to 0.
//The condition [if(currentSum < 0){currentSum = nums[i];}] checks for negative arrays.
/*For ex : In the array {-3, -2, -1, -4}, current sum and max sum start from -3, then current sum becomes -2 as current sum < 0 and 
if (currentSum > maxSum){maxSum = currentSum;} makes the max sum as -2 too, then current sum and max sum become -1, then current sum becomes -4 but max sum remians
-1 and that's how it returns -1, and deals with all negative arrays.

So this array returns -1.
*/
int maxSubarraySum(int nums[], int n)
{
    int maxSum = nums[0];
    int currentSum = nums[0];

     for (int i = 1; i < n; i++)
    {
        if (currentSum < 0){
            currentSum = nums[i];
        }
        else{
            currentSum += nums[i];
        }
        if (currentSum > maxSum){
            maxSum = currentSum;
        }
    }
    return maxSum;
}
