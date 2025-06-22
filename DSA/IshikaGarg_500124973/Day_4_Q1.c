#include <stdio.h>

int findMinimum(int nums[], int n) {
    int min = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    return min;
}

int main() {
    int nums1[] = {4, 2, 7, 1, 9};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Minimum element: %d\n", findMinimum(nums1, n1));  
    return 0;
}
