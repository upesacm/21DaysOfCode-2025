#include <stdio.h>

#define MAX 1000

int containsDuplicate(int nums[], int n) {
    int freq[2 * MAX + 1] = {0};

    for (int i = 0; i < n; i++) {
        int index = nums[i] + MAX;
        if (freq[index] > 0) {
            return 1;
        }
        freq[index]++;
    }

    return 0;
}

int main() {
    int nums[] = {1, 2, 3, 2};
    int n = sizeof(nums) / sizeof(nums[0]);

    if (containsDuplicate(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}

