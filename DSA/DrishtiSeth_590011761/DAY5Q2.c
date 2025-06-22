#include <stdio.h>

int main() {
    int nums[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int n = 9;
    int total = n * (n + 1) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum = sum + nums[i];
    }
    int missing = total - sum;
    printf("%d", missing);
    return 0;
}
