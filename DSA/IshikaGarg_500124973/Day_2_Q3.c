#include <stdio.h>
#include <stdbool.h>

#define MAX 1001  // Assumes elements range from 0 to 1000

bool areArraysEqual(int nums1[], int nums2[], int size1, int size2) {
    if (size1 != size2)
        return false;  // Different sizes mean arrays can't be equal

    int freq1[MAX] = {0};
    int freq2[MAX] = {0};

    // Count frequencies in nums1
    for (int i = 0; i < size1; i++) {
        freq1[nums1[i]]++;
    }

    // Count frequencies in nums2
    for (int i = 0; i < size2; i++) {
        freq2[nums2[i]]++;
    }

    // Compare frequency arrays
    for (int i = 0; i < MAX; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {4, 3, 2, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);

    printf("Example 1: %s\n", areArraysEqual(nums1, nums2, size1, size2) ? "true" : "false");

    return 0;
}
