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
    int nums[] = {2, 2, 1};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("The unique element is: %d\n", singleNumber(nums, size));
    return 0;
}
