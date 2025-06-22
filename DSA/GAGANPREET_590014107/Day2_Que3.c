#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int areArraysEqual(int nums1[], int nums2[], int size1, int size2) {
    if (size1 != size2) 
    return 0; 

    qsort(nums1, size1, sizeof(int), compare);
    qsort(nums2, size2, sizeof(int), compare);

    for (int i = 0; i < size1; i++) {
        if (nums1[i] != nums2[i])
            return 0;
    }
    return 1;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {4, 3, 2, 1};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    
    if (areArraysEqual(nums1, nums2, size1, size2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
