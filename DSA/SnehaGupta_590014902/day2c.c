//solution
#include <stdio.h>
#include <stdbool.h>

#define MAX 100

void countFrequency(int arr[], int n, int freq[]) {
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
}

bool areArraysEqual(int nums1[], int nums2[], int n) {
    int freq1[MAX] = {0}, freq2[MAX] = {0};

    countFrequency(nums1, n, freq1);
    countFrequency(nums2, n, freq2);

    for (int i = 0; i < MAX; i++) {
        if (freq1[i] != freq2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums1[n], nums2[n];
    printf("Enter %d numbers for first array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter %d numbers for second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    if (areArraysEqual(nums1, nums2, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
