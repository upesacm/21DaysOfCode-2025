#include <stdio.h>

void sort_colors(int nums[], int size) {
    int left = 0, current = 0, right = size - 1;
    while (current <= right) {
        if (nums[current] == 0) {
            int temp = nums[left];
            nums[left] = nums[current];
            nums[current] = temp;
            left++;
            current++;
        } else if (nums[current] == 1) {
            current++;
        } else {
            int temp = nums[current];
            nums[current] = nums[right];
            nums[right] = temp;
            right--;
        }
    }
}

int main() {
    int nums[] = {2, 0, 2, 1, 1, 0};
    int size = sizeof(nums) / sizeof(nums[0]);
    sort_colors(nums, size);
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}
