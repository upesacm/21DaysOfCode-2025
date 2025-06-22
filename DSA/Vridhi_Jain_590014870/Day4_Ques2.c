#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], rotated[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter the number of steps to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < n; i++) {
        int new_pos = (i + k) % n;
        rotated[new_pos] = nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", rotated[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
