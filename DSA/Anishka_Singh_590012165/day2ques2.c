#include <stdio.h>

void firstlast(int a[], int n) {
    if(n > 0) {
        printf("First: %d, Last: %d\n", a[0], a[n - 1]);
    } else {
        printf("Array is empty.\n");
    }
}

int main() {
    int a[] = {5, 9, 2};
    int n = sizeof(a) / sizeof(a[0]);
    firstlast(a, n);
    return 0;
}


