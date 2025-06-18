
#include <stdio.h>

int main() {
    int arr[100], i, total = 0, len;

    printf("Enter number of elements: ");
    scanf("%d", &len);

    printf("Enter the values:\n");
    for (i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            total += arr[i];
        }
    }

    printf("Total of even numbers is: %d\n", total);

    return 0;
}
