#include <stdio.h>

int findMissingNumber(int* nums, int n) 
{
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) 
    {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() 
{
    int n;

    printf("Enter the number of elements (should be n): ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Array must have at least one element.\n");
        return 1;
    }

    int nums[n];
    printf("Enter %d elements from range 0 to %d:\n", n, n);

    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    int missing = findMissingNumber(nums, n);
    printf("The missing number is: %d\n", missing);

    return 0;
}
