#include <stdio.h>

int k_frequency_element_sum(int nums[], int size, int k) {
    int freq[101] = {0}; // Assuming values are in range 0-100
    for (int i = 0; i < size; i++) {
        freq[nums[i]]++;
    }

    int sum = 0;
    for (int i = 0; i < 101; i++) {
        if (freq[i] == k) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int nums[] = {1,8,8,8,5,6,2};
    int k = 3;
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("%d\n", k_frequency_element_sum(nums, size, k));  // Output: 5
    return 0;
}
