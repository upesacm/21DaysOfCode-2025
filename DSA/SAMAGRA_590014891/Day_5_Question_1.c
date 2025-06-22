#include <stdio.h>

int singleNumber(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                count++;
            }
        }
        if (count == 1) {
            return nums[i];
        }
    }
    return -1;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);

    int unique = singleNumber(nums, size);
    printf("%d\n", unique);

    return 0;
}
