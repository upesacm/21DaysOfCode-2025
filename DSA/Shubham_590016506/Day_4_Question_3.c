#include <stdio.h>

int remove_val(int arr[], int n, int val) {
    int j = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] != val)
            arr[j++] = arr[i];
    return j;
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int nums[] = {3, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int new_len = remove_val(nums, size, 3);
    printf("Length: %d\n", new_len); 
    print(nums, new_len);           
}