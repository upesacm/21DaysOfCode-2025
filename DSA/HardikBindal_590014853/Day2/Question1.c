#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the size of the array you want -");
    scanf("%d", &n);
    int nums[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        if(nums[i] % 2 == 0) sum += nums[i];
    }
    printf("%d", sum);
    return 0;
}
