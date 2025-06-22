#include <stdio.h>

int finc(int* nums, int n) {
    for (int i = 1; i < n; i++) {
        if (nums[i] <= nums[i - 1])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf(finc(arr, n) ? "True\n" : "False\n");
    return 0;
}
