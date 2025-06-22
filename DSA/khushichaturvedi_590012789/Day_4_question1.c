#include <stdio.h>

int findMinimum(int nums[], int n) {
    int min = nums[0]; 
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
        }
    }
    return min;
}

int main() {
    int nums[] = {7, 3, 9, 2, 5, 1, 6};
    int n = sizeof(nums) / sizeof(nums[0]);

    int minElement = findMinimum(nums, n);
    printf("The minimum element in the array is: %d\n", minElement);

    return 0;
}
