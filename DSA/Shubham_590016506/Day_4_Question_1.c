#include <stdio.h>

int find_min(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int nums[] = {4, 2, 7, 1, 9};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("Min: %d\n", find_min(nums, size)); 
}