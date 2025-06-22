#include<stdio.h>

int findDuplicate(int* nums, int numsSize) {
    int slow = nums[0];
    int fast = nums[0];

    // Phase 1: Finding the intersection point
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Phase 2: Finding the entrance to the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    int nums[] = {1, 3, 4, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    int duplicate = findDuplicate(nums, size);
    printf("Duplicate number is %d\n", duplicate);
    return 0;
}
