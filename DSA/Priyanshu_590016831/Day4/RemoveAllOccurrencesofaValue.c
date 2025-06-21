#include <stdio.h>

int removeElement(int nums[], int n, int val) {
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];
            j++;
        }
    }

    return j;
}

int main() {
    int n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value to remove: ");
    scanf("%d", &val);

    int newLength = removeElement(nums, n, val);

    printf("New array length: %d\n", newLength);
    printf("Modified array: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
