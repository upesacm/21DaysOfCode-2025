#include <stdio.h>

int containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return 1;  // true
            }
        }
    }
    return 0;  // false
}
int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, size))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
