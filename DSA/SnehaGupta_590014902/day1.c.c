//solution
#include <stdio.h>

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int size = sizeof(nums) / sizeof(nums[0]);

    int sum = sumOfArray(nums, size);

    printf("Sum: %d\n", sum);

    return 0;
}
