#include <stdio.h>

int main() {
    int nums[] = {3, 7, 11, 2, 1, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    int min = nums[0];

    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }

    printf("The minimum element in the array is: %d\n", min);
    return 0;
}
