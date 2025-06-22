#include <stdio.h>
#include <stdbool.h>

bool isStrictlyIncreasing(int nums[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (nums[i] >= nums[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    printf("%s\n", isStrictlyIncreasing(nums1, 4) ? "true" : "false"); 
    return 0;
}
