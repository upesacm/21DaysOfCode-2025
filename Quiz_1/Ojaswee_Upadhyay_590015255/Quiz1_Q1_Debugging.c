/*The Bug lies in how currentSum is initialized and handled
for all negative arrays
currentSum=0
So if in the loop currentSum becomes <0
it resets to 0


Case={-,4,-3,-2,-1}
maxSum=-4
during iterations
currentSum sets from -3 to 0
then from -2 to 0
and similarly for every iteration it sets to 0
*/
#include <stdio.h>
int maxSubarraySum(int nums[],int n){
    int maxSum=nums[0];
    int currentSum=nums[0];
    for(int i=1;i<n;i++){
        if(currentSum+nums[i]>nums[i]){
            currentSum += nums[i];
        } else {
            currentSum = nums[i];
        }
        if(currentSum > maxSum){
            maxSum = currentSum;
        }

    }
    return maxSum;
}
/*This is the correct implementation of this function*/
