// Find Duplicate in Array using Floyd's Tortoise and Hare
#include <stdio.h>

int findDuplicate(int* nums, int n) {
    int slow = nums[0];
    int fast = nums[0];
    // Phase 1: Find intersection point
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    // Phase 2: Find entrance to the cycle
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main() {
    int n;
    printf("Enter n (array will have n+1 elements, values 1 to n): ");
    scanf("%d", &n);
    int nums[n+1];
    printf("Enter %d numbers (each between 1 and %d):\n", n+1, n);
    for (int i = 0; i < n+1; i++) {
        scanf("%d", &nums[i]);
    }
    int duplicate = findDuplicate(nums, n+1);
    printf("Duplicate number: %d\n", duplicate);
    return 0;
}