#include <stdio.h>

int removeoccurrences(int nums[], int n, int val) {
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[index++] = nums[i];
        }
    }
    return index;
}

void printarray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 3;

    int length = removeoccurrences(nums, n, val);
    printf("New array length: %d\n", length);
    printf("Modified array: ");
    printarray(nums, length);

    return 0;
}
