#include <stdio.h>


void rotate(int nums[], int n, int k) {
    int rotated[n];
    k = k % n; 

    for(int i = 0; i < n; i++) {
        rotated[(i + k) % n] = nums[i];
    }

    for(int i = 0; i < n; i++) {
        nums[i] = rotated[i];
    }
}

void printArray(int nums[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    printf("Original array:\n");
    printArray(nums, n);

    rotate(nums, n, k);

    printf("Array after rotating by %d steps:\n", k);
    printArray(nums, n);

    return 0;
}
