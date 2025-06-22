#include <stdio.h>

int kfrequencysum(int nums[], int n, int k) {
    int freq[1000] = {0}, sum = 0;
    
    for (int i = 0; i < n; i++)
        freq[nums[i]]++;
    
    for (int i = 0; i < 1000; i++) {
        if (freq[i] == k)
            sum += i;
    }
    
    return sum;
}

int main() {
    int nums[] = {1, 8, 8, 8, 5, 6, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    int k = 3;
    
    printf("Sum of elements appearing %d times = %d\n", k, kfrequencysum(nums, n, k));
    return 0;
}
