/*1. Find the Unique Element
A problem that requires finding the single element that appears only once while all others
appear twice.
Problem Statement:
Given a non-empty array of integers nums, where every element appears exactly twice except
for one element that appears only once, find and return the element that appears only once.
This problem helps develop skills in frequency counting, bit manipulation, or set-based
techniques, commonly used in data cleansing and error detection.
Your task:
Find and return the element that appears only once in the array.
Examples
Input:
nums = [2, 2, 1]
Output:1
Input:
nums = [4, 1, 2, 1, 2]
Output:4
Input:
nums = [1]
Output:1*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], result = 0;
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        result ^= nums[i];
    }

    printf("The element that appears only once: %d\n", result);

    return 0;
}
