#include <stdio.h>

int findUniqueNumber(int* numbers, int size) {
    int unique = 0;
    for (int i = 0; i < size; i++) {
        unique = unique ^ numbers[i];
    }
    return unique;
}

int main() {
    int nums1[] = {2, 2, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("The unique number is: %d\n", findUniqueNumber(nums1, size1)); // Output: 1

    int nums2[] = {4, 1, 2, 1, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("The unique number is: %d\n", findUniqueNumber(nums2, size2)); // Output: 4

    return 0;
}