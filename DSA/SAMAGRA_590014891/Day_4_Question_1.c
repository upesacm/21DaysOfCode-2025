#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int min = nums[0];
    for(int i = 1; i < n; i++) {
        if(nums[i] < min) {
            min = nums[i];
        }
    }

    printf("Minimum element: %d\n", min);
    return 0;
}
