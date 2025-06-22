#include <stdio.h>

#define MAX 1000

int main() {
    int n, val, nums[MAX], new_len = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter value to remove: ");
    scanf("%d", &val);

    for(int i = 0; i < n; i++) {
        if(nums[i] != val)
            nums[new_len++] = nums[i];
    }
    printf("%d\n", new_len);
    return 0;
}