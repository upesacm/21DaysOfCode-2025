#include <stdio.h>

int removeOccurrences(int nums[], int n, int val) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}

int main() {
    int nums[] = {3, 2, 2, 3, 4, 2, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 2;

    int newLength = removeOccurrences(nums, n, val);

    printf("Array after removing %d: ", val);
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\nNew length of the array: %d\n", newLength);

    return 0;
}
