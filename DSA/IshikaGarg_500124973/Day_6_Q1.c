#include <stdio.h>

int findDuplicate(int nums[], int size) {
    int slow = nums[0];
    int fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    // Find the entrance to the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main() {
    int nums1[] = {1, 3, 4, 2, 2};
    printf("%d\n", findDuplicate(nums1, 5)); 
    return 0;
}
