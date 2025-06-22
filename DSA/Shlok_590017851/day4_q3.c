#include <stdio.h>
int removeOccurrences(int nums[], int n, int val) 
{
    int i = 0;  
    for (int j = 0; j < n; j++) 
    {
        if (nums[j] != val) 
        {
            nums[i] = nums[j];  
            i++;
        }
    }
    return i;  
}
void printArray(int nums[], int len) 
{
    for (int i = 0; i < len; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
int main()
{
    int nums[] = {1, 2, 3, 4, 3, 5, 3};
    int val = 3;
    int n = sizeof(nums) / sizeof(nums[0]);
    int newLen = removeOccurrences(nums, n, val);
    printf("New array after removing %d: ", val);
    printArray(nums, newLen);
    printf("New length: %d\n", newLen);
    return 0;
}
