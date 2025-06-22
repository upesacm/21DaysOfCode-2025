#include <stdio.h>
#include <stdbool.h>
#define MAX 1000  // Adjust as needed based on expected value range
bool containsDuplicate(int nums[], int n) 
{
    int freq[MAX] = {0};
    for (int i = 0; i < n; i++) 
    {
        if (freq[nums[i]] == 1) 
        {
            return true;
        }
        freq[nums[i]] = 1;
    }
    return false;
}
int main() 
{
    int nums[] = {3, 1, 4, 2, 5, 3};  
    int n = sizeof(nums) / sizeof(nums[0]);
    if (containsDuplicate(nums, n)) 
    {
        printf("Duplicate found.\n");
    } 
    else
    {
        printf("No duplicates found.\n");
    }
    return 0;
}
