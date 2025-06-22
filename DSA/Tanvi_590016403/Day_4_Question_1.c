#include <stdio.h>

// 1. Find the Minimum Element
int findMinimum(int nums[], int n) {
    int min = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

// 2. Rotate Array by k Steps
void rotateArray(int nums[], int n, int k) {
    int temp[n];
    k = k % n;  // To handle cases when k > n

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = nums[i];
    }

    // Copy temp back to nums
    for (int i = 0; i < n; i++) {
        nums[i] = temp[i];
    }
}

// 3. Remove All Occurrences of a Value
int removeOccurrences(int nums[], int n, int val) {
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[index++] = nums[i];
        }
    }
    return index; // New length
}

// Utility function to print array
void printArray(int nums[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", nums[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");
}

// Main Function to test all three
int main() {
    // Problem 1: Find Minimum
    int nums1[] = {4, 2, 7, 1, 9};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Minimum element: %d\n", findMinimum(nums1, size1));

    // Problem 2: Rotate Array
    int nums2[] = {1, 2, 3, 4, 5};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int k = 2;
    rotateArray(nums2, size2, k);
    printf("Rotated Array: ");
    printArray(nums2, size2);

    // Problem 3: Remove Occurrences
    int nums3[] = {3, 2, 2, 3};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int val = 3;
    int newLength = removeOccurrences(nums3, size3, val);
    printf("Array after removing %d: ", val);
    printArray(nums3, newLength);
    printf("New length: %d\n", newLength);

    return 0;
}
