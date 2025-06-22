#include <stdio.h>
#include <stdbool.h>

// 1. Function to find the unique element (every element appears twice except one)
int findUniqueElement(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= nums[i];  // XOR operation
    }
    return result;
}

// 2. Function to find the missing number in range [0, n]
int findMissingNumber(int nums[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    return expectedSum - actualSum;
}

// 3. Function to check if array is a palindrome
bool isPalindrome(int nums[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

// Main function to demonstrate the above utilities
int main() {
    // Problem 1: Find Unique Element
    int arr1[] = {4, 1, 2, 1, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Unique Element: %d\n", findUniqueElement(arr1, n1));

    // Problem 2: Find Missing Number
    int arr2[] = {3, 0, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Missing Number: %d\n", findMissingNumber(arr2, n2));

    // Problem 3: Check if Array is Palindrome
    int arr3[] = {1, 2, 3, 2, 1};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Is Palindrome: %s\n", isPalindrome(arr3, n3) ? "true" : "false");

    return 0;
}
