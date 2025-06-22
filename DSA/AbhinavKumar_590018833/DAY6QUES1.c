#include <stdio.h>

int findDuplicate(int nums[], int n) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    fast = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}
int main() {
    int nums1[] = {1, 3, 4, 2, 2};
    int nums2[] = {3, 1, 3, 4, 2};
    int nums3[] = {1, 1, 2};

    printf("Duplicate in nums1: %d\n", findDuplicate(nums1, 5)); 
    printf("Duplicate in nums2: %d\n", findDuplicate(nums2, 5));
    printf("Duplicate in nums3: %d\n", findDuplicate(nums3, 3));

    return 0;
}
