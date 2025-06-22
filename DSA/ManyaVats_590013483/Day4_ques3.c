#include <stdio.h>

int main() {
    int nums[] = {3, 2, 2, 3};
    int n = 4;
    int val = 3;
    int i, j = 0;

    for (i = 0; i < n; i++) {
        if (nums[i] != val) {
            nums[j] = nums[i];  
            j++;
        }
    }
    printf("New length: %d\n", j);
    printf("Modified array: ");
    for (i = 0; i < j; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
