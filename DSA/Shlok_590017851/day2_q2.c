#include <stdio.h>
void findFirstAndLast(int nums[], int n) 
{
    if (n == 0) 
    {
        printf("Array is empty.\n");
        return;
    }
    printf("First element: %d\n", nums[0]);
    printf("Last element: %d\n", nums[n - 1]);
}
int main() 
{
    int nums[] = {5, 15, 25, 35, 45};
    int n = sizeof(nums) / sizeof(nums[0]);
    findFirstAndLast(nums, n);
    return 0;
}
