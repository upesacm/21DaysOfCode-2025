#include <stdio.h>

int fdup(int* nums, int n) {
    int slow = nums[0], fast = nums[0];
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main() {
    int n;
    printf("Enter size of array (n+1): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (1 to n):\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Duplicate: %d\n", fdup(arr, n));
    return 0;
}
