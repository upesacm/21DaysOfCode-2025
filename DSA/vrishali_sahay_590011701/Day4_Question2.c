#include <stdio.h>

#define MAX 1000

int main() {
    int n, k, nums[MAX], rotated[MAX];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    k = k % n;
    for(int i = 0; i < n; i++)
        rotated[(i + k) % n] = nums[i];

    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", rotated[(n - k + i) % n]);
        if(i != n-1) printf(", ");
    }
    printf("]\n");
    return 0;
}