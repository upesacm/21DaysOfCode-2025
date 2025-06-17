
#include <stdio.h>

int main() {
    int nums1[100], nums2[100];
    int count1[100] = {0}, count2[100] = {0};
    int n, i;

    // Take input for size of arrays
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    // Take input for first array
    printf("Enter elements of first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums1[i]);
        count1[nums1[i]]++;
    }

    // Take input for second array
    printf("Enter elements of second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
        count2[nums2[i]]++;
    }

    // Check if frequencies match
    int same = 1;
    for (i = 0; i < 100; i++) {
        if (count1[i] != count2[i]) {
            same = 0;
            break;
        }
    }

    if (same == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
