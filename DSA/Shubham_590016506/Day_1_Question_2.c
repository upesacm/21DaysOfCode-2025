#include <stdio.h>

void findMissingAndRepeated(int nums[], int size) {
    int count[size + 1];
    for(int i = 0; i <= size; i++) {
        count[i] = 0;
    }
    for(int i = 0; i < size; i++) {
        count[nums[i]]++;
    }
    int missing = -1, repeated = -1;
    for(int i = 1; i <= size; i++) {
        if(count[i] == 0) {
            missing = i;
        }
        if(count[i] == 2) {
            repeated = i;
        }
    }
    printf("Missing: %d, Twice: %d\n", missing, repeated);
}

int main() {
    int nums1[] = {3, 1, 3};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Input: [3, 1, 3]\n");
    findMissingAndRepeated(nums1, size1);

    int nums2[] = {4, 3, 6, 2, 1, 1};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Input: [4, 3, 6, 2, 1, 1]\n");
    findMissingAndRepeated(nums2, size2);

    return 0;
}