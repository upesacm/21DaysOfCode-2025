#include <stdio.h>
#include <stdbool.h>
bool containsDuplicate(int* nums, int n) {
    int freq[10001] = {0};
    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] > 0)
            return true;
        freq[nums[i]]++;
    }
    return false;
}

int main() {
    int nums[] = {1, 2, 3, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    if (containsDuplicate(nums, n))
        printf("Output: true\n");
    else
        printf("Output: false\n");
    return 0;
}
