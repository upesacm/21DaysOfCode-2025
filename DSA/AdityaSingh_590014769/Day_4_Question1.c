/*1. Find the Minimum Element
A fundamental problem that teaches about finding extremes in data sets using comparison￾
based algorithms.
Problem Statement:
Given an array nums of size n, find and return the minimum element in the array.
This is a fundamental problem that teaches you about finding extremes in data sets and
introduces you to comparison-based algorithms, which are essential for data analysis and
optimization problems.
Your task:
Find and return the minimum element in the array.
Examples
Input:
nums = [4, 2, 7, 1, 9]
Output:
1
Input:
nums = [5, 5, 5]
Output:
5
Input:
nums = [-3, -1, -5, -2]
Output:
-5*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int min = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("Minimum element: %d\n", min);

    return 0;
}