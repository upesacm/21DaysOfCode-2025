#include <stdio.h>

int main() {
    int nums[] = {4, 2, 7, 1, 9};
    int size = sizeof(nums) / sizeof(nums[0]);
    int min = nums[0];
    for (int i = 1; i < size; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    printf("%d\n", min);
    return 0;
}