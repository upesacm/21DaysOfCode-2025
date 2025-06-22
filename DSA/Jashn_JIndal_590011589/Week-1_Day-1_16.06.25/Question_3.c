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
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    printf("Sum of array elements: %d\n", sum);
    return 0;
}
