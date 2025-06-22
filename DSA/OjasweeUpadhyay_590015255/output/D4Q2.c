
#include <stdio.h>
void rotateArray(int nums[], int n, int k) {
    k = k % n; 
    if (k == 0) return; 

    
    for (int i = 0; i < n / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[n - 1 - i];
        nums[n - 1 - i] = temp;
    }

    
    for (int i = 0; i < k / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[k - 1 - i];
        nums[k - 1 - i] = temp;
    }

   
    for (int i = k; i < (n + k) / 2; i++) {
        int temp = nums[i];
        nums[i] = nums[n - 1 - (i - k)];
        nums[n - 1 - (i - k)] = temp;
    }
}
int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; 
    }
    
    int nums[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Enter the number of steps to rotate the array: ");
    scanf("%d", &k);
    
    rotateArray(nums, n, k);
    
    printf("The rotated array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}