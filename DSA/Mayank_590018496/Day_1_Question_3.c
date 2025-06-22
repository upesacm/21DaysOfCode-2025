#include <stdio.h>

int sum_of_array(int nums[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Sum of array elements: %d\n", sum_of_array(nums, n));

    return 0;
}
