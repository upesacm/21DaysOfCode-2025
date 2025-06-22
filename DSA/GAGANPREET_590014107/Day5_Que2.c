#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int expectedSum = 0;
    int actualSum = 0;

    for (int i = 0; i <= size; i++) {
        expectedSum += i;
    }

    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int nums[] = {0, 1, 2, 4}; 
    int size = sizeof(nums) / sizeof(nums[0]);

    int missing = findMissingNumber(nums, size);
    printf("The missing number is: %d\n", missing);

    return 0;
}
