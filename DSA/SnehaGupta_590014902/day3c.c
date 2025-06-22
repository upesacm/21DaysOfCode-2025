//solution
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
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = findSecondLargest(nums, n);

    if (result == -1) {
        printf("-1\n"); // No second largest unique value
    } else {
        printf("Second largest element: %d\n", result);
    }

    return 0;
}
