#include <stdio.h>
int findDuplicate(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        int index = abs(nums[i]);
        if (nums[index] < 0) {
            return index;
        }
        nums[index] = -nums[index];
    }
    return -1;
}

int main() {
    int nums[] = {1, 3, 4, 2, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Duplicate number: %d\n", findDuplicate(nums, size));
    return 0;
}
