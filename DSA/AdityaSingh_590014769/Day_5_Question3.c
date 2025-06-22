/*3. Check if Array is Palindrome
A problem that introduces palindrome detection algorithms and symmetry checking.
Problem Statement:
Given an array nums of size n, determine if the array is a palindrome (reads the same
forwards and backwards). Return true if it is, otherwise false.
This problem introduces you to palindrome detection algorithms and symmetry checking,
which are important concepts in pattern recognition and array analysis.
Your task:
Determine if the array is a palindrome and return true or false.
Examples
Input:
nums = [1, 2, 3, 2, 1]
Output:
true
Input:
nums = [1, 2, 3, 4]
Output:
false
Input:
nums = [5, 5, 5, 5]
Output:
true*/
#include <stdio.h>

int function(int nums[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - 1 - i]) {
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
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}