#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    int nums[n];
    printf("Enter elements to the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int maxLen = 1, currLen = 1; 

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1] + 1)
        {
            currLen++; 
        }
        else
        {
            if (currLen > maxLen)
                maxLen = currLen; 
            currLen = 1; 
        }
    }
    if (currLen > maxLen)
        maxLen = currLen;

    printf("Length of longest consecutive increasing subarray = %d\n", maxLen);
    return 0;
}
