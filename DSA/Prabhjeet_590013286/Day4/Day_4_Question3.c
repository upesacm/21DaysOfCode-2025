/*3. Remove All Occurrences of a Value
A problem that teaches in-place array modification using two-pointer techniques.
Problem Statement:
Given an array nums of size n and a value val, remove all occurrences of val from the array.
Return the new length of the array after removals.
This problem teaches you about in-place array modification and introduces the two-pointer
technique, which is widely used in array manipulation algorithms.
Your task:
Remove all occurrences of the given value and return the new length of the array.
Examples
Input:
nums = [3, 2, 2, 3], val = 3
Output:
2
(new array length after removals)
Input:
nums = [0, 1, 2, 2, 3, 0, 4, 2], val = 2
Output:
5
Input:
nums = [1, 1, 1], val = 1
Output:
0*/
#include <stdio.h>

int function(int nums[], int n, int val) 
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

int main() 
{
    int n, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int newLength = function(nums, n, val);
    printf("New length after removals: %d\n", newLength);

    printf("Modified array: ");
    for (int i = 0; i < newLength; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}