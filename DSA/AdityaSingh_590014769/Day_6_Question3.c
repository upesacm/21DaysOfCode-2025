/*3. Find the Length of the Longest Consecutive Increasing Subarray
A problem that introduces subarray analysis and consecutive pattern tracking.
Problem Statement:
Given an array nums of size n, find the length of the longest contiguous subarray where
each element is strictly greater than the previous one (by 1).
This problem introduces you to subarray analysis and teaches you how to track consecutive
increasing patterns, which is essential for sequence recognition and dynamic programming
techniques.
Your task:
Find the length of the longest contiguous subarray with consecutive increasing elements.
Examples
Input:
nums = [1, 2, 2, 3, 4, 1, 2, 3, 4, 5]
Output:
5
(subarray: [1, 2, 3, 4, 5])
Input:
nums = [5, 4, 3, 2]
Output:
1
Input:
nums = [1, 2, 3, 5, 6, 7]
Output:
3
(subarray: [5, 6, 7])*/
#include <stdio.h>

int function(int nums[], int n) {
    int maxLen = 1, currentLen = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 1;
        }
    }

    return maxLen;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = function(nums, n);
    printf("Length of the longest consecutive increasing subarray: %d\n", result);

    return 0;
}