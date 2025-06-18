#include <stdio.h>

int calculateArraySum(int array[], int length) {
    int total = 0;
    for (int i = 0; i < length; i++) {
        total += array[i];
    }
    return total;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];  

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int result = calculateArraySum(numbers, n);
    printf("Sum of array elements: %d\n", result);

    return 0;
}
