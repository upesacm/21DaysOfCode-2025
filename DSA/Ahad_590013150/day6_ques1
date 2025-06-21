#include <stdio.h>

int findDuplicate(int* nums, int numsSize) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Find intersection point in cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Find entrance to cycle (duplicate)
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    int nums[] = {3, 1, 3, 4, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Duplicate: %d\n", findDuplicate(nums, size));
    return 0;
}
