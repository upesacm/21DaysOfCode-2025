#include <stdio.h>
int great(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] >= arr[i + 1]) {  
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (great(arr, n)) {
        printf("True\n");  
    } else {
        printf("False\n"); 
    }
    return 0;
}
