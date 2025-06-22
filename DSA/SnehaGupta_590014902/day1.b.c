//solution
#include <stdio.h>

void findMissingAndDuplicate(int arr[], int size, int *missing, int *duplicate) {
    int freq[size + 1];

    for (int i = 0; i <= size; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    for (int i = 1; i <= size; i++) {
        if (freq[i] == 0) {
            *missing = i;
        } else if (freq[i] > 1) {
            *duplicate = i;
        }
    }
}

int main() {
    int nums[] = {3, 1, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    int missing, duplicate;
    findMissingAndDuplicate(nums, size, &missing, &duplicate);

    printf("Missing: %d, Duplicate: %d\n", missing, duplicate);

    return 0;
}
