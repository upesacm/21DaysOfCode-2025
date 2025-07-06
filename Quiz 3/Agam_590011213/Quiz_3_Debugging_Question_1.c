#include <stdio.h>

int binary_search(int nums[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int nums[] = {1, 3, 5, 7, 9};
    int size = sizeof(nums) / sizeof(nums[0]);
    int target = 5;
    int result = binary_search(nums, size, target);
    if (result != -1)
        printf("Found at index: %d\n", result);
    else
        printf("Not found\n");
    return 0;
}
