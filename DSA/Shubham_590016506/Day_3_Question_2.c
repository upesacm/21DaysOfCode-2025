#include <stdio.h>
#include <stdbool.h>
#define MAX 10000

bool containsDuplicate(int* nums, int size) {
    int offset = MAX, freq[2 * MAX + 1] = {0};
    for (int i = 0; i < size; i++) {
        int index = nums[i] + offset;
        if (freq[index]) return true;
        freq[index] = 1;
    }
    return false;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {1, 2, 3, 2};
    printf("Output 1: %s\n", containsDuplicate(nums1, 4) ? "true" : "false");
    printf("Output 2: %s\n", containsDuplicate(nums2, 4) ? "true" : "false");
    return 0;
}