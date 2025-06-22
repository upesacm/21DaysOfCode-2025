#include <stdio.h>
int main() 
{
    int n;
    printf("Enter array size:\n");
    scanf("%d", &n);

    int nums[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int min = nums[0];
    for (int i = 1; i < n; i++) 
    {
        if (nums[i] < min) 
        {
            min = nums[i];
        }
    }
    printf("The minimum element in the array is: %d\n", min);
    return 0;
}
