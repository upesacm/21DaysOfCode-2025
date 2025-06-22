#include <stdio.h>

int isStrictlyIncreasing(int nums[], int n) {
    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {1, 2, 2, 3};
    int nums3[] = {5, 4, 3};

    printf("Output: %s\n", isStrictlyIncreasing(nums1, 4) ? "true" : "false");
    printf("Output: %s\n", isStrictlyIncreasing(nums2, 4) ? "true" : "false"); 
    printf("Output: %s\n", isStrictlyIncreasing(nums3, 3) ? "true" : "false");  
    return 0;
}
