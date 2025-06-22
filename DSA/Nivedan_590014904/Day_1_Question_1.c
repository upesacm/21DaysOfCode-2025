#include <stdio.h>
void replace(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
     int nums[n];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    replace(nums, n);
    printf("New array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
