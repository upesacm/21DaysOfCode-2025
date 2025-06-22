#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("First: %d, Last: %d\n", nums[0], nums[n-1]);
    return 0;
}