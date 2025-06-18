
#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int f1[100] = {0}, f2[100] = {0};
    int n, i;

    printf("Enter size of both arrays: ");
    scanf("%d", &n);

    printf("Enter elements in first array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
        f1[arr1[i]]++;
    }

    printf("Enter elements in second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
        f2[arr2[i]]++;
    }

    int equal = 1;
    for (i = 0; i < 100; i++) {
        if (f1[i] != f2[i]) {
            equal = 0;
            break;
        }
    }

    if (equal == 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
