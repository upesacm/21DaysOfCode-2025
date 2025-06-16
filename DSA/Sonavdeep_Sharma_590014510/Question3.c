#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    int arr[N];

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum =sum+ arr[i];
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
