/*A problem that teaches duplicate detection using mathematical constraints and the pigeonhole
principle.
Problem Statement:
Given an integer array of n+1 integers where each integer is between 1 and n (inclusive), find
one duplicate number that appears in the array.
By the pigeonhole principle, at least one duplicate must exist since we have n+1 numbers in
the range 1 to n. This problem teaches you about detecting duplicates and understanding
mathematical constraints in array problems.
Your task:
Find one duplicate number that appears in the array.
Examples
Input:
nums = [1, 3, 4, 2, 2]
Output:
2
Explanation: The number 2 appears twice in the array.
Input:
nums = [3, 1, 3, 4, 2]
Output:
3
Explanation: The number 3 appears twice in the array.
Input:
nums = [1, 1, 2]
Output:
1
Explanation: The number 1 appears twice in the array*/
#include <stdio.h>

int function(int nums[], int n) {
    int freq[n + 1];
    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n + 1; i++) {
        if (freq[nums[i]] == 1) {
            return nums[i]; // Duplicate found
        }
        freq[nums[i]]++;
    }

    return -1; // Should never reach here based on the problem's guarantee
}

int main() {
    int n;
    printf("Enter n (array will have n + 1 elements): ");
    scanf("%d", &n);

    int nums[n + 1];
    printf("Enter %d elements (in range 1 to %d):\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &nums[i]);
    }

    int result = function(nums, n);
    printf("Duplicate number: %d\n", result);

    return 0;
}