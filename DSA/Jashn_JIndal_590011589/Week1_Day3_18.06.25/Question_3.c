#include <stdio.h>
int SecondLargest(int nums[], int n) {
    if (n < 2) return -1;
    int first = -1, second = -1;
    for (int i = 0; i < n; i++) {
        if (nums[i] > first) {
            second = first;
            first = nums[i];
        } 
        else if (nums[i] > second && nums[i] != first) {
            second = nums[i];
        }
    }
    return second;
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result = SecondLargest(nums, n);
    printf("%d\n", result);
    return 0;
}
