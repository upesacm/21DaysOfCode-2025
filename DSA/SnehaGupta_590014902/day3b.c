//solution
#include <stdio.h>

int hasDuplicates(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return 1; 
            }
        }
    }
    return 0; 
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

    if (hasDuplicates(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
