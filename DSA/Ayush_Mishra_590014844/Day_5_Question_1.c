#include <stdio.h>

int findSingle(int nums[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= nums[i];  // XOR logic
    }
    return result;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Unique element: %d\n", findSingle(nums, size));
    return 0;
}
