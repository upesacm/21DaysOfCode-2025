#include <stdio.h>

void rotatearray(int nums[], int n, int k) {
    int result[n];
    k = k % n;  

    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = nums[i];
    }

   
    for (int i = 0; i < n; i++) {
        nums[i] = result[i];
    }
}

void printarray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    rotatearray(nums, n, k);
    printf("Rotated array: ");
    printarray(nums, n);

    return 0;
}
