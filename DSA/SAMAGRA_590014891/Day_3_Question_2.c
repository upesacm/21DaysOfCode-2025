#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int hasDuplicate = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                hasDuplicate = 1;
                break;
            }
        }
        if (hasDuplicate)
            break;
    }

    if (hasDuplicate)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
