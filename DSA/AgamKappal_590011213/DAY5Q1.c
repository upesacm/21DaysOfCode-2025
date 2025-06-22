#include <stdio.h>

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int n = 5;
    int result = 0;
    for(int i = 0; i < n; i++) {
        result = result ^ nums[i];
    }
    printf("%d", result);
    return 0;
}
