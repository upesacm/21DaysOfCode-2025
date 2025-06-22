#include <stdio.h>
#include <stdlib.h>
int sumKFrequencyElements(int *nums, int n, int k) {
    int freq[10001] = {0};
    int sum = 0;

    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }

    for (int i = 0; i < 10001; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int nums[] = {2, 3, 9, 9};
    int k = 1;
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Output: %d\n", sumKFrequencyElements(nums, n, k));
    return 0;
}
