#include <stdio.h>
void rotate(int arr[], int n, int k) {
    int result[n];
    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);

    rotate(nums, n, n - (k % n));

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
