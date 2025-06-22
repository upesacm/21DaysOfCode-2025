#include <stdio.h>

int findDuplicate(int* nums, int size) {
    int slow = nums[0];
    int fast = nums[0];

    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

   
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}

int main() {
    int n;

    printf("Enter value of n (array will be of size n+1): ");
    scanf("%d", &n);

    int size = n + 1;
    int nums[size];

    printf("Enter %d elements (each between 1 and %d):\n", size, n);
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int duplicate = findDuplicate(nums, size);
    printf("Duplicate number: %d\n", duplicate);

    return 0;
}
