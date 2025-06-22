/*Sum of All Even Numbers A problem that combines conditional logic with accumulation to filter and sum specific elements.
 Problem Statement: Given an array of integers nums of size n, calculate and return the sum of all even numbers in the array.
  This problem combines conditional logic with accumulation,
   teaching you to filter elements based on specific criteria while performing mathematical operations on the filtered data. Your task: Calculate and return the sum of all even numbers in the array.
    Examples Input: nums = [1, 2, 3, 4, 5] Output: 6 Input: nums = [10, 15, 20] 
    Output: 30 Input: nums = [1, 3, 5] Output: 0 make 
    it short in c and use scanf*/

#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
      int nums[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(nums[i] % 2 == 0)
            sum += nums[i];
    }

    printf("%d\n", sum);
    return 0;
}
