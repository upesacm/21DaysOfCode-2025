#include <stdio.h>

void replaceNegatives(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0)
            arr[i] = 0;
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int nums[] = {-1, 2, -3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);

    replaceNegatives(nums, n);
    printArray(nums, n);

    return 0;
}
