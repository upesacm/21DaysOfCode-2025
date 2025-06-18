#include <stdio.h>

int hasDuplicates(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return 1;
            }
        }
    }
    return 0; 
}
int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {1, 2, 3, 2};
    int nums3[] = {5, 5, 5};
    printf("Output: %s\n", hasDuplicates(nums1, 4) ? "true" : "false");
    printf("Output: %s\n", hasDuplicates(nums2, 4) ? "true" : "false");
    printf("Output: %s\n", hasDuplicates(nums3, 3) ? "true" : "false");
    return 0;
}
