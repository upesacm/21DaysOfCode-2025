#include <stdio.h>

int Peak(int* nums, int numsSize) 
{
    int left = 0;
    int right = numsSize - 1;
    
    while (left < right) 
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < nums[mid + 1]) 
        {
            left = mid + 1;
        } 
        else 
        {
            right = mid;
        }
    }
    return left;
}

int main() 
{
    int size;
    scanf("%d", &size);
    if (size <= 0) 
    {
        return 0;
    }
    
    int nums[size];
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    int peakIndex = Peak(nums, size);
    printf("%d\n", peakIndex);
    
    return 0;
}