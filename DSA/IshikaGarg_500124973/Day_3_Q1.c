#include <stdio.h>
#include <stdlib.h>

#define OFFSET 1000
#define SIZE 2001    

int kFrequencySum(int* nums, int numsSize, int k) {
    int freq[SIZE] = {0};
    int sum = 0;

    for (int i = 0; i < numsSize; i++) {
        freq[nums[i] + OFFSET]++;
    }

    for (int i = 0; i < SIZE; i++) {
        if (freq[i] == k) {
            sum += (i - OFFSET);
        }
    }

    return sum;
}

int main() {
    int nums[] = {2, 3, 9, 9};
    int k = 1;
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = kFrequencySum(nums, size, k);
    printf("Output: %d\n", result);  

    return 0;
}
