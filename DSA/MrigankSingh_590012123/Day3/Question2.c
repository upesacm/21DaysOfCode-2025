#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) 
{
    return (*(int*)a - *(int*)b);
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    qsort(nums, n, sizeof(int), compare);

    int hasDuplicate = 0;
    for (int i = 1; i < n; i++) 
    {
        if (nums[i] == nums[i-1]) 
        {
            hasDuplicate = 1;
            break;
        }
    }

    if (hasDuplicate)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}