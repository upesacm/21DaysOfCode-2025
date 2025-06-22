#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[k++] = nums[i];
        }
    }
    return k;
}

int main() {
    int n, val;
    scanf("%d", &n);
    if (n <= 0) return 1;
    int nums[n];
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);
    scanf("%d", &val);
    int newLength = removeElement(nums, n, val);
    printf("%d\n", newLength);
    for (int i = 0; i < newLength; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;
}
