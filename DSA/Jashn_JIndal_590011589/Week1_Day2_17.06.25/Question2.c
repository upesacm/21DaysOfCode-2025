#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be positive!\n");
        return 1;
    }
    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    printf("First: %d, Last: %d\n", nums[0], nums[n-1]);
    return 0;
}
