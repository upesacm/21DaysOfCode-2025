#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int main() {
    int nums[] = {10, 20, 30, 40};
    int n = 4;

    
    qsort(nums, n, sizeof(int), compare);

    int largest = nums[0];
    int second_largest = -1;

    for (int i = 1; i < n; i++) {
        if (nums[i] < largest) {
            second_largest = nums[i];
            break;
        }
    }

    printf("%d\n", second_largest);
    return 0;
}
