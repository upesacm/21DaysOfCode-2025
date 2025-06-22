#include <stdio.h>

void reverse(int *a, int l, int r) {
    while (l < r) {
        int t = a[l];
        a[l] = a[r];
        a[r] = t;
        l++;
        r--;
    }
}

void rotate(int *nums, int n, int k) {
    if (n == 0) return;
    k %= n;
    reverse(nums, 0, n - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, n - 1);
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;
    rotate(nums, n, k);
    for (int i = 0; i < n; i++)
        printf("%d ", nums[i]);
    return 0;
}
