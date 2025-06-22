#include <stdio.h>

void replaceNum(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;  // Replace negative with 0
        }
    }
}

void printArray(int nums[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {-1, 2, -3, 4, 5};  // You can change this input
    int size = sizeof(nums) / sizeof(nums[0]);

    replaceNum(nums, size);
    printArray(nums, size);

    return 0;
}
