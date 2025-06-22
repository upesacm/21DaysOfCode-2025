
#include <stdio.h>

int main() {
    int arr[100];
    int n, i;

    printf("Enter how many numbers you want in the array: ");
    scanf("%d", &n);

    printf("Enter the numbers:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }

    printf("Array after replacing negative numbers with zero:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
