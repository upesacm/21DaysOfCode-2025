#include <stdio.h>

int findUnique(int nums[], int size) {
    int unique = 0;
    for(int i = 0; i < size; i++) {
        unique ^= nums[i];
    }
    return unique;
}
int main() {
    int nums1[] = {2, 2, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Unique element: %d\n", findUnique(nums1, size1));
    int nums2[] = {4, 1, 2, 1, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Unique element: %d\n", findUnique(nums2, size2));
    int nums3[] = {1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("Unique element: %d\n", findUnique(nums3, size3));
    return 0;
}
