#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int* nums, int size) {
    for (int i = 0; i < size / 2; i++) {
        if (nums[i] != nums[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; 
    }
    
    int nums[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    if (isPalindrome(nums, n)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }
    
    return 0;
}
   
