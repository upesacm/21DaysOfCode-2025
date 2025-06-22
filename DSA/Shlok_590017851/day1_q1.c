#include <stdio.h>
void replaceNegativesWithZero(int nums[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        if(nums[i] < 0) 
        {
            nums[i] = 0;
        }
    }
}

int main() 
{
    int nums[] = {4, -3, 7, -1, 0, -6, 9};
    int n = sizeof(nums) / sizeof(nums[0]);

    replaceNegativesWithZero(nums, n);
    printf("Modified array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", nums[i]);
    }
    return 0;
}
