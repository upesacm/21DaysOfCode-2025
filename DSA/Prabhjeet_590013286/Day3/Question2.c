/*2. Check for Duplicates
A problem that introduces duplicate detection algorithms and set-based thinking.
Problem Statement:
Given an array nums of size n, return true if any value appears more than once, otherwise
return false.
This problem helps you practice set-based logic and understand how to efficiently detect
repetitions using built-in data structures.
Your task:
Return true if any value appears more than once, otherwise return false.
Examples
Input:
nums = [1, 2, 3, 4]
Output:
false
Input:
nums = [1, 2, 3, 2]
Output:
true
Input:
nums = [5, 5, 5]
Output:
true*/
#include <stdio.h>

int function(int nums[], int n) 
{
    for (int i = 0; i < n - 1; i++)
     {
        for (int j = i + 1; j < n; j++)
         {
            if (nums[i] == nums[j]) 
            {
                return 1; 
            }
        }
    }
    return 0;
}

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (function(nums, n)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}