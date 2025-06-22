/*3. Find the Second Largest Element
A problem that teaches about finding extremes in data and handling edge cases.
Problem Statement:
Given an array nums of size n, find the second largest unique element in the array. If it
doesn't exist (e.g., all elements are the same), return -1.
This problem helps you understand extreme value tracking and teaches you to handle edge
cases where the expected result may not exist.
Your task:
Find the second largest unique element in the array, or return -1 if it doesn’t exist.
Examples
Input:
nums = [10, 20, 30, 40]
Output:
30
Input:
nums = [5, 5, 5]
Output:
-1
Input:
nums = [3, 2, 1]
Output:
2*/
#include <stdio.h>

int function(int nums[], int n)
{
    int largest = -1, second = -1;

    for (int i = 0; i < n; i++) 
    {
        if (nums[i] > largest) 
        {
            largest = nums[i];
        }
    }

    for (int i = 0; i < n; i++) 
    {
        if (nums[i] > second && nums[i] < largest) 
        {
            second = nums[i];
        }
    }

    return (second == -1) ? -1 : second;
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    int result = function(nums, n);
    if (result != -1)
        printf("Second largest unique element: %d\n", result);
    else
        printf("-1 \n");

    return 0;
}