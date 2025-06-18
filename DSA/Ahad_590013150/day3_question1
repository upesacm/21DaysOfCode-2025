#include <stdio.h>

#define MAX 1000

int sumOfElementsWithKOccurrences(int nums[], int n, int k) {
    int freq[2 * MAX + 1] = {0};

    for (int i = 0; i < n; i++) {
        freq[nums[i] + MAX]++;
    }

    int sum = 0;
    for (int i = 0; i < 2 * MAX + 1; i++) {
        if (freq[i] == k) {
            sum += i - MAX;
        }
    }

    return sum;
}

int main() {
    int nums[] = {2, 3, 9, 9};
    int k = 1;
    int n = sizeof(nums) / sizeof(nums[0]);

    int result = sumOfElementsWithKOccurrences(nums, n, k);
    printf("Output: %d\n", result);

    return 0;
}
