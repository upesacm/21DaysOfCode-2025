#include <stdio.h>
int sumOfArray(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    printf("Sum: %d\n", sumOfArray(nums, n));
    return 0;
}
