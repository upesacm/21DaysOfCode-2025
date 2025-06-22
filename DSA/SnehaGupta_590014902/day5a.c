//solution
#include <stdio.h>

int findUniqueElement(int nums[], int n) {
    int unique = 0;
    for (int i = 0; i < n; i++) {
        unique ^= nums[i]; 
    }
    return unique;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers (where every number appears twice except one): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int unique = findUniqueElement(nums, n);
    printf("Unique element: %d\n", unique);

    return 0;
}
