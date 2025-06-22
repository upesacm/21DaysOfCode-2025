#include <stdio.h>
int removeElement(int arr[], int n, int val) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] != val) {
            arr[i++] = arr[j];
        }
    }
    return i;
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int val = 3;
    int n = sizeof(nums) / sizeof(nums[0]);

    int newLength = removeElement(nums, n, val);
    printf("New array length after removals: %d\n", newLength);
    return 0;
}
