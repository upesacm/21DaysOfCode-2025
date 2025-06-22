#include <stdio.h>

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], rotated[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);
    k = k % n;

    for(int i = 0; i < n; i++) {
        rotated[(i + k) % n] = nums[i];
    }

    printf("Rotated array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}
