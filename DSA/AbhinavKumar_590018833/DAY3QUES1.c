#include <stdio.h>

int kFrequencySum(int nums[], int n, int k) {
    int freq[1000] = {0}; 
    int seen[1000] = {0}; 
    int sum = 0;
    for (int i = 0; i < n; i++) {
        freq[nums[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] == k && seen[nums[i]] == 0) {
            sum += nums[i];
            seen[nums[i]] = 1; 
        }
    }
    return sum;
}
int main() {
    int nums1[] = {2, 3, 9, 9};
    int nums2[] = {1, 8, 8, 8, 5, 6, 2};

    printf("Output: %d\n", kFrequencySum(nums1, 4, 1)); 
    printf("Output: %d\n", kFrequencySum(nums2, 7, 3)); 

    return 0;
}
