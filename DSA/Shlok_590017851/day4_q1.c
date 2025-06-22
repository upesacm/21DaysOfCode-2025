#include <stdio.h>
int findMinimum(int nums[], int n) 
{
    if (n == 0) 
    {
        printf("Array is empty.\n");
        return -1;  
    }
    int min = nums[0];
    for (int i = 1; i < n; i++) 
    {
        if (nums[i] < min) 
        {
            min = nums[i];
        }
    }
    return min;
}
int main() {
    int nums[] = {25, 7, 18, 42, 3, 19};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = findMinimum(nums, n);
    printf("Minimum element in the array: %d\n", result);
    return 0;
}
