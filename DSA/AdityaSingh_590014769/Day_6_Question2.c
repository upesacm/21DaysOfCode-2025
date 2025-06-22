/*2. Check if Array is Fully Increasing
A problem that teaches sequence validation and introduces monotonic array concepts.
Problem Statement:
Given an array of integers nums, return true if each number is strictly greater than the one
before it. Otherwise, return false.
Note: The array must strictly increase — no equal numbers allowed.
This problem helps you validate monotonic sequences, which are crucial in sorted data
analysis and many algorithmic applications.
Your task:
Return true if the array is strictly increasing, otherwise return false.
Examples
Input:
nums = [1, 2, 3, 4]
Output:
true
Input:
nums = [1, 2, 2, 3]
Output:
false
Input:
nums = [5, 4, 3]
Output:
false*/
#include <stdio.h>

int function(int nums[], int n) {
    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (function(nums, n)) {
        printf("The array is strictly increasing.\n");
    } else {
        printf("The array is not strictly increasing.\n");
    }

    return 0;
}