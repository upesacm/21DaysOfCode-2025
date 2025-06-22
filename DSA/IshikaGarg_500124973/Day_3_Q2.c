#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, size)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
