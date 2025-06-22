#include <stdio.h>

int main() {
    int n, val;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int newLength = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[newLength] = nums[i];
            newLength++;
        }
    }

    printf("%d\n", newLength);

    return 0;
}
