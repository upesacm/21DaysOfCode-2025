#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    int result[5];

    k = k % n;
  
    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = nums[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
