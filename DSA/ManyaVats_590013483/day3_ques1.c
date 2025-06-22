#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int nums[] = {2, 3, 9, 9};
    int n = 4;
    int k = 1;
    
    qsort(nums, n, sizeof(int), compare);
    
    int sum = 0;
    int count = 1;  
    for (int i = 1; i <= n; i++) {
        if (i < n && nums[i] == nums[i - 1]) {
            count++;
        } else {
            if (count == k) {
                sum += nums[i - 1];
            }
            count = 1;  
        }
    }
    
    printf("%d\n", sum);
    return 0;
}
