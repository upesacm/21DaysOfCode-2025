#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    int rotated[5];

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }

    return 0;
}