#include <stdio.h>

int isUnique(int arr[], int n, int val) {
    int count = 0;
    for(int i = 0; i < n; i++)
        if(arr[i] == val)
            count++;
    return count == 1;
}

int secondLargestUnique(int nums[], int n) {
    int first = -1, second = -1;

    for(int i = 0; i < n; i++) {
        if(!isUnique(nums, n, nums[i]))
            continue;

        if(nums[i] > first) {
            second = first;
            first = nums[i];
        } else if(nums[i] > second && nums[i] < first) {
            second = nums[i];
        }
    }

    return second;
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = secondLargestUnique(nums, n);
    if(result == -1) {
        printf("No second largest unique element found.\n");
    } else {
        printf("The second largest unique element is: %d\n", result);
    }

    return 0;
    
}
