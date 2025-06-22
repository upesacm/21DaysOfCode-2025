#include <stdio.h>
int palindrome(int arr[], int n) {
    int j = n - 1;
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[j]) {
            return 0;  
        }
        j--;
    }
    return 1;  
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (palindrome(arr, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
}
