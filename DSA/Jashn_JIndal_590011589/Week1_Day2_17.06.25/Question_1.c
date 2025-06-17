#include <stdio.h>
int main() {
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    int sum = 0;
    
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);

        if (nums[i] % 2 == 0) {
            sum += nums[i];
        }
    }
    
    printf("Sum of even numbers: %d\n", sum);
    return 0;
}
