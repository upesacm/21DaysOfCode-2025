/*  1 : 
# firstly we could have just initialized the currentSum = arr[0] from the very start. 

# Inside the loop where currentSum < 0 it is resetting the currentSum to 0 
instead it should have been currentSum = arr[i] or it won't work with negative elements because it will be resetting it to 0. 
*/

/*  2 : 
# As I mentioned before it won't work in the case of negative numbers because it will keep on resetting the currSum to 0
*/

/*  3 : 
output will be -1 (maxSum = -1 at last cuz -1 > -4 in the last iteration)
*/

// 4 : corrected version :
 
#include <stdio.h>

int maxSubarraySum(int nums[], int n) {
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) {
        if (currentSum < 0)
            currentSum = nums[i];
        else
            currentSum += nums[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }
    return maxSum;
}