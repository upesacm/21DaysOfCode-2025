#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    bool isPalindrome = true;
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        printf("The array is a palindrome.\n");
    else
        printf("The array is not a palindrome.\n");

    return 0;
}
