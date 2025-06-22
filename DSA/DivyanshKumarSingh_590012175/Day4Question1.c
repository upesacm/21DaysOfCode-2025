#include <stdio.h>

int Minimum(int nums[], int n) 
{
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

int main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    int min = Minimum(nums, n);

    printf("The minimum element in the array is: %d\n", min);

    return 0;
}
