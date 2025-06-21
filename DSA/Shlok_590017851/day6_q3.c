#include <stdio.h>
int longestConsecutiveIncreasingSubarray(int nums[], int size)
{
    if (size == 0) return 0;

    int maxLength = 1;
    int currentLength = 1;
  
    for (int i = 1; i < size; i++) 
    {
        if (nums[i] == nums[i - 1] + 1) 
        {
            currentLength++;
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
        } 
        else 
        {
            currentLength = 1;  
        }
    }
    return maxLength;
}
int main() 
{
    int nums[] = {1, 2, 2, 3, 4, 1, 2, 3, 4, 5};  
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = longestConsecutiveIncreasingSubarray(nums, size);
    printf("Length of longest consecutive increasing subarray is: %d\n", result);
    return 0;
}
