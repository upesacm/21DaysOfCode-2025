#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100], f[100];

    for (i = 0; i <= n; i++) {
        f[i] = 0;
    }

    printf("Enter %d nums:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[a[i]]++;
    }

    printf("Input: [");
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    int rep = 0, miss = 0;

    for (i = 1; i <= n; i++) {
        if (f[i] == 2) {
            rep = i;
        }
        if (f[i] == 0) {
            miss = i;
        }
    }

    printf("Output:\n");
    printf("Missing: %d, Twice: %d\n", miss, rep);

    return 0;
}
