#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start++] = arr[end];
        arr[end--] = temp;
    }
}

void rotateArray(int nums[], int n, int k) {
    k = k % n;  // To handle cases when k > n

    reverse(nums, 0, n - 1);      
    reverse(nums, 0, k - 1);       
    reverse(nums, k, n - 1);        
}

void printArray(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 2;

    rotateArray(nums, n, k);

    printf("Rotated array: ");
    printArray(nums, n); 

    return 0;
}

