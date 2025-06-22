//solution
#include <stdio.h>

int remove(int nums[], int n, int val) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (nums[j] != val) {
            nums[i] = nums[j];
            i++;
        }
    }
    return i;
}

int main() {
    int n, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int newLen = remove(nums, n, val);

    printf("New array length: %d\n", newLen);
    printf("Modified array: ");
    for (int i = 0; i < newLen; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
