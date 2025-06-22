#include <stdio.h>
int sumOfArray(int nums[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += nums[i];
    }

    return sum;
}

int main() {

    int nums[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(nums) / sizeof(nums[0]);
    int total = sumOfArray(nums, size1);
    printf("Sum of [1, 2, 3, 4, 5] is: %d\n", total);
    return 0;
}