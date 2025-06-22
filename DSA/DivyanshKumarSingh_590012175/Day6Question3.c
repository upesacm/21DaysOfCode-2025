#include <stdio.h>

int longestConsecutiveSubarray(int* nums, int n) 
{
    if (n == 0) return 0;

    int maxLen = 1;
    int cLen = 1;

    for (int i = 1; i < n; i++) 
    {
        if (nums[i] == nums[i - 1] + 1) 
        {
            cLen++;
            if (cLen > maxLen) maxLen = cLen;
        } else 
        {
            cLen = 1;
        }
    }

    return maxLen;
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Length: 0\n");
        return 0;
    }

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    scanf("%d", &nums[i]);

    int result = longestConsecutiveSubarray(nums, n);
    printf("Length of longest consecutive increasing subarray: %d\n", result);

    return 0;
}
