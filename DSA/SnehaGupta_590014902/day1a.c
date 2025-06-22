//solution
#include <stdio.h>

void replace_Neg_no(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    replace_neg_no(nums, n);

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
