//solution
#include <stdio.h>

void rotateArray(int nums[], int n, int k) {
    int rotated[n];
    k = k % n; 

    for (int i = 0; i < n; i++) {
        rotated[(i + k) % n] = nums[i];
    }

    
    for (int i = 0; i < n; i++) {
        nums[i] = rotated[i];
    }
}

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value of k (steps to rotate): ");
    scanf("%d", &k);

    rotateArray(nums, n, n - k); 

    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n");
    return 0;
}
