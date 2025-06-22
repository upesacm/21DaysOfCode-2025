#include <stdio.h>

int main() {
    int n, val;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int j = 0;
    for(int i = 0; i < n; i++) {
        if(nums[i] != val) {
            nums[j++] = nums[i]; 
        }
    }

    printf("New length after removal: %d\n", j);
    printf("Array after removal: ");
    for(int i = 0; i < j; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
