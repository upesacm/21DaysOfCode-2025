#include <stdio.h>

void rotate(int nums[], int n, int k) 
{
    int result[n];  

    k = k % n;

    for (int i = 0; i < n; i++) 
    {
        result[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) 
    {
        nums[i] = result[i];
    }
}

int main() 
{
    int n, k;

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

    printf("Enter the number of steps to rotate (k): ");
    scanf("%d", &k);

    rotate(nums, n, k);

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
