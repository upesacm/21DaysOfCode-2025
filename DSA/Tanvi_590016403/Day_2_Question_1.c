#include <stdio.h>
#include <stdbool.h>

// 1. Function to calculate the sum of all even numbers
int sumOfEvenNumbers(int nums[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            sum += nums[i];
    }
    return sum;
}

// 2. Function to print the first and last elements of the array
void printFirstAndLast(int nums[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("First: %d, Last: %d\n", nums[0], nums[n - 1]);
}

// 3. Function to check if two arrays have the same frequency of elements
bool areArraysEqual(int nums1[], int nums2[], int n1, int n2) {
    if (n1 != n2)
        return false;

    // Assuming values are within a reasonable range (-1000 to 1000)
    int freq1[2001] = {0};  // Offset by +1000 for negative numbers
    int freq2[2001] = {0};

    for (int i = 0; i < n1; i++)
        freq1[nums1[i] + 1000]++;

    for (int i = 0; i < n2; i++)
        freq2[nums2[i] + 1000]++;

    for (int i = 0; i < 2001; i++) {
        if (freq1[i] != freq2[i])
            return false;
    }
    return true;
}

// Main function to demonstrate all three
int main() {
    // Task 1: Sum of even numbers
    int nums1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Sum of even numbers: %d\n", sumOfEvenNumbers(nums1, size1));

    // Task 2: First and last element
    int nums2[] = {5, 9, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("First and Last Elements:\n");
    printFirstAndLast(nums2, size2);

    // Task 3: Compare two arrays
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 3, 2, 1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Arrays are equal in frequency: %s\n", areArraysEqual(arr1, arr2, n1, n2) ? "true" : "false");

    return 0;
}
