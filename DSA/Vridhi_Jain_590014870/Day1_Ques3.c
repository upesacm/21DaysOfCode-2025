#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int a[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d nums:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("Input: [");
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Output:\n%d\n", sum);

    return 0;
}
