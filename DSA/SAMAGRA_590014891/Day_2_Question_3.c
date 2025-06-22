#include <stdio.h>
#include <stdbool.h>

void countFrequency(int arr[], int freq[], int size) {
    for(int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }
}

bool areEqual(int arr1[], int arr2[], int size1, int size2) {
    if(size1 != size2)
        return false;

    int max = 1001; 
    int freq1[max], freq2[max];

    for(int i = 0; i < max; i++) {
        freq1[i] = 0;
        freq2[i] = 0;
    }

    countFrequency(arr1, freq1, size1);
    countFrequency(arr2, freq2, size2);

    for(int i = 0; i < max; i++) {
        if(freq1[i] != freq2[i])
            return false;
    }

    return true;
}

int main() {
    int n;

    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int nums1[n], nums2[n];

    printf("Enter %d elements for the first array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter %d elements for the second array:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    if(areEqual(nums1, nums2, n, n))
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
