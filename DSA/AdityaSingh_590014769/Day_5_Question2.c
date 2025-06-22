/*2. Find the Missing Number
A problem that introduces mathematical relationships in arrays using expected vs actual
sums.
Problem Statement:
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is
missing from the array.
This problem introduces you to mathematical relationships in arrays and teaches you about
the concept of expected vs actual sums. It’s a classic example of using mathematical
properties to solve problems efficiently.
Your task:
Find the missing number from the sequence 0 to n.
Examples
Input:
nums = [3, 0, 1]
Output:
2
Input:
nums = [0, 1]
Output:
2
Input:
nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]
Output:
8*/
#include <stdio.h>

int function(int nums[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements (from 0 to %d with one missing):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = function(nums, n);
    printf("Missing number: %d\n", result);

    return 0;
}