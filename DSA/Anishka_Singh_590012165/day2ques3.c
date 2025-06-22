#include <stdio.h>
#include <stdbool.h>

#define MAX 1000  

bool arraysequal(int nums1[], int n1, int nums2[], int n2) {
    if(n1 != n2) return false;

    int freq1[MAX] = {0}, freq2[MAX] = {0};

    for(int i = 0; i < n1; i++) {
        freq1[nums1[i]]++;
    }

    for(int i = 0; i < n2; i++) {
        freq2[nums2[i]]++;
    }

    for(int i = 0; i < MAX; i++) {
        if(freq1[i] != freq2[i]) return false;
    }

    return true;
}

int main() {
    int nums1[] = {1, 2, 2, 3};
    int nums2[] = {1, 2, 3, 3};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    if(arraysequal(nums1, n1, nums2, n2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}


