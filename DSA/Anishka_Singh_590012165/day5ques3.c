#include <stdio.h>
#include <stdbool.h>

bool palindrome(int arr[], int n) {
    for(int i = 0; i < n / 2; i++) {
        if(arr[i] != arr[n - 1 - i])
            return false;
    }
    return true;
}

int main() {
    int nums[] = {1, 2, 3, 2, 1};
    int n = sizeof(nums)/sizeof(nums[0]);

    if(palindrome(nums, n))
        printf("Array is Palindrome\n");
    else
        printf("Array is NOT Palindrome\n");

    return 0;
}
