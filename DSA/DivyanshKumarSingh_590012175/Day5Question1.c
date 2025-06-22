#include <stdio.h>

int findUnique(int* nums, int numsSize)
{
    int unique = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        unique ^= nums[i];  
    }
    return unique;
}

int main() 
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];

    printf("Enter %d elements: \n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    int result = findUnique(nums, n);

    printf("The unique element is: %d\n", result);

    return 0;
}
