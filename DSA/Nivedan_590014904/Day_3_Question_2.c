#include <stdio.h>

int dup(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                return 0; 
            }
        }
    }
    return 1; 
}
int main() {
    int n;
    printf("Enter the Length of the Array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = dup(n, arr);
    if (result == 1) {
        printf("False\n");
    } else {
        printf("True\n");
    }

    return 0;
}
