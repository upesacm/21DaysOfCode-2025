#include <stdio.h>
#define MAX 1000  // Assumes elements are in the range 0 to 999

int main() {
    int nums1[MAX], nums2[MAX];
    int freq1[MAX] = {0}, freq2[MAX] = {0};
    int n1, n2, i;
    int isEqual = 1;

    // Input first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &nums1[i]);
        freq1[nums1[i]]++;
    }

    // Input second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &nums2[i]);
        freq2[nums2[i]]++;
    }

    // Compare frequencies
    if (n1 != n2) {
        isEqual = 0;
    } else {
        for (i = 0; i < MAX; i++) {
            if (freq1[i] != freq2[i]) {
                isEqual = 0;
                break;
            }
        }
    }

    // Output result
    if (isEqual) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
