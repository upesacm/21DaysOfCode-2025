#include <stdio.h>
#include <stdbool.h>

bool areEqual(int *nums1, int *nums2, int n1, int n2) {
    if (n1 != n2) return false;
    int freq1[1001] = {0}, freq2[1001] = {0};
    for (int i = 0; i < n1; i++) {
        freq1[nums1[i]]++;
        freq2[nums2[i]]++;
    }
    for (int i = 0; i < 1001; i++) {
        if (freq1[i] != freq2[i]) return false;
    }
    return true;
}

int main() {
    int nums1[] = {1, 2, 3}, nums2[] = {1, 2, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    if (areEqual(nums1, nums2, n1, n2))
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
