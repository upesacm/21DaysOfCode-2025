#include <stdio.h>
#include <stdbool.h>
#define MAX 1000
void countFrequencies(int arr[], int n, int freq[]) {
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
}

bool areEqual(int a[], int b[], int n1, int n2) {
    if (n1 != n2) return false;

    int freqA[MAX] = {0};
    int freqB[MAX] = {0};

    countFrequencies(a, n1, freqA);
    countFrequencies(b, n2, freqB);

    for (int i = 0; i < MAX; i++) {
        if (freqA[i] != freqB[i])
            return false;
    }

    return true;
}

int main() {
    int nums1[] = {1, 2, 3, 4};
    int nums2[] = {4, 3, 2, 1};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    if (areEqual(nums1, nums2, n1, n2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
