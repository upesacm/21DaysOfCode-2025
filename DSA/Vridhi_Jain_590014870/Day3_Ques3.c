#include <stdio.h>

int findSecondLargest(int nums[], int n) {
    int first = -1, second = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } else if (nums[i] > second && nums[i] < first) {
            second = nums[i];
        }
    }

    return second;
}

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = findSecondLargest(nums, n);

    if (result != -1)
        printf("%d\n", result);
    else
        printf("-1\n");

    return 0;
}
