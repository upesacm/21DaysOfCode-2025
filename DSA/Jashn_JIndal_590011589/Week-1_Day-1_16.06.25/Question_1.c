#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (nums[i] < 0) {
            nums[i] = 0;
        }
    }
    
    printf("New array: ");
    for (int i = 0; i < n; i++) {
        printf("%d\t", nums[i]);
    }
    
    return 0;
}
