#include <stdio.h>

int missingNumber(int nums[], int size) {
    int n = size; 
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += nums[i];
    }
    return expectedSum - actualSum;
}

int main() {
    int nums1[] = {3, 0, 1};
    int nums2[] = {0, 1};
    int nums3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    printf("%d\n", missingNumber(nums1, 3));
    return 0;
}
