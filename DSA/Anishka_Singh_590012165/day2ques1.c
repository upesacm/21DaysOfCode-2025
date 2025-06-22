#include <stdio.h>

int sumevennumbers(int a[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            sum += a[i];
        }
    }
    return sum;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Sum of even numbers: %d\n", sumevenNumbers(a, n));
    return 0;
}





