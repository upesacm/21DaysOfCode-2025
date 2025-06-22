#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
    printf("Modified array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    return 0;
}
