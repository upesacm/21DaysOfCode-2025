#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter the number of elements you want to add - ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the %d element - ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of the elements = %d\n", sum);
    return 0;
}

