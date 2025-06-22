#include <stdio.h>

int removeValue(int *nums, int n, int val) {
    int i = 0;
    for (int j = 0; j < n; j++)
        if (nums[j] != val)
            nums[i++] = nums[j];
    return i;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    int val = 3;
    n = removeValue(nums, n, val);
    printf("%d\n", n);
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    return 0;
}
