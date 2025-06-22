#include <stdio.h>
#include <stdbool.h>
bool Duplicate(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}
int main() {
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    if (Duplicate(nums, n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
  
    return 0;
}
