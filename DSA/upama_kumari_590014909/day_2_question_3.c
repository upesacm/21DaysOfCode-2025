#include <stdio.h>
int areArraysEqual(int a[], int b[], int n) {
    int i, j, found;
    for (i = 0; i < n; i++) {
        found = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                b[j] = -1; 
                found = 1;
                break;
            }
        }
        if (found == 0) {
            return 0; 
        }
    }
    return 1; 
}
int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {4, 3, 2, 1};
    int n = sizeof(nums1) / sizeof(nums1[0]);

    if (areArraysEqual(nums1, nums2, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
