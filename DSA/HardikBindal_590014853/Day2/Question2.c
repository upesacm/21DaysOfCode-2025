#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the array you want -");
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("First: %d, Last: %d", nums[0], nums[n-1]);
    return 0;
}
