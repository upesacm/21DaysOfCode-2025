#include <stdio.h>
int findSecondLargest(int nums[], int n) 
{
    if (n < 2) return -1;
    int first = -1, second = -1;
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] > first) 
        {
            second = first;
            first = nums[i];
        } 
        else if (nums[i] < first && nums[i] > second) 
        {
            second = nums[i];
        }
    }
    return (second == -1) ? -1 : second;
}
int main() 
{
    int nums[] = {10, 20, 20, 8, 15};
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = findSecondLargest(nums, n);
    if (result == -1)
        printf("Second largest unique element does not exist.\n");
    else
        printf("Second largest unique element: %d\n", result);
    return 0;
}
