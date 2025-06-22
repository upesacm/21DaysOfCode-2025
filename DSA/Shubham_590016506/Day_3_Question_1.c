#include <stdio.h>
#define MAX 10000

int sumOfKDistinct(int arr[], int k, int size) {
    int offset = MAX;
    int freq[2 * MAX + 1] = {0};
    for (int i = 0; i < size; i++) freq[arr[i] + offset]++;
    int sum = 0;
    for (int i = 0; i < 2 * MAX + 1; i++)
        if (freq[i] == k) sum += (i - offset);
    return sum;
}

int main() {
    int nums1[] = {2, 3, 9, 9};
    int nums2[] = {1, 8, 8, 8, 5, 6, 2};
    printf("Output 1: %d\n", sumOfKDistinct(nums1, 1, 4));
    printf("Output 2: %d\n", sumOfKDistinct(nums2, 3, 7));
    return 0;
}