#include <stdio.h>

void replaceNegativesWithZero(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums1[] = {-1, 2, -3, 4, 5};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    replaceNegativesWithZero(nums1, size1);
    printArray(nums1, size1); 

    int nums2[] = {0, -5, -10};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    replaceNegativesWithZero(nums2, size2);
    printArray(nums2, size2);  

    int nums3[] = {1, 2, 3, 4};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    replaceNegativesWithZero(nums3, size3);
    printArray(nums3, size3);  

    return 0;
}
