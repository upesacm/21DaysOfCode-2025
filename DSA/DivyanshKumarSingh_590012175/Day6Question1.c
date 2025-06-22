#include <stdio.h>

int findDuplicate(int* nums, int numsSize) 
{
    int s = nums[0];
    int f = nums[0];

    do 
    {
        s = nums[s];
        f = nums[nums[f]];
    } while (s != f);

    s = nums[0];
    while (s != f) 
    {
        s = nums[s];
        f = nums[f];
    }

    return s;
}

int main() 
{
    int n;
    printf("Enter the value of n (array size should be n+1): ");
    scanf("%d", &n);

    int nums[n + 1];
    printf("Enter %d elements (each between 1 and %d):\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) 
    {
        scanf("%d", &nums[i]);
    }

    int duplicate = findDuplicate(nums, n + 1);
    printf("Duplicate number is: %d\n", duplicate);

    return 0;
}
