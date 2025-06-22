#include <stdio.h>

int flen(int* nums, int n) {
    if (n == 0) return 0;
    int maxLen = 1, curLen = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1] + 1)
            curLen++;
        else
            curLen = 1;
        if (curLen > maxLen)
            maxLen = curLen;
    }
    return maxLen;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Longest length: %d\n", flen(arr, n));
    return 0;
}
