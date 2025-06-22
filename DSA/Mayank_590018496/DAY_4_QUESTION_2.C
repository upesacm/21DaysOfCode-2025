#include <stdio.h>

void rotateArray(int nums[], int n, int k) {
    k = k % n;
    int rotated[n];

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) {
        nums[i] = rotated[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    rotateArray(nums, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
