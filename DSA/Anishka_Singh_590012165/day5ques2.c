#include <stdio.h>

int missing(int arr[], int n) {
    int expectedsum = n * (n + 1) / 2;
    int actualsum = 0;
    for(int i = 0; i < n; i++) {
        actualsum += arr[i];
    }
    return expectedsum - actualsum;
}

int main() {
    int nums[] = {3, 0, 1};
    int n = sizeof(nums)/sizeof(nums[0]);  
    printf("Missing Number: %d\n", missing(nums, n));
    return 0;
}
