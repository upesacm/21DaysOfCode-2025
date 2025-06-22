#include <stdio.h>

#define MAX 1000

int main() {
    int n, nums[MAX], i, largest, second = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Find largest
    largest = nums[0];
    for(i = 1; i < n; i++)
        if(nums[i] > largest)
            largest = nums[i];

    // Find second largest unique
    int found = 0;
    for(i = 0; i < n; i++) {
        if(nums[i] != largest) {
            if(!found || nums[i] > second) {
                second = nums[i];
                found = 1;
            }
        }
    }
    if(!found)
        printf("-1\n");
    else
        printf("%d\n", second);
    return 0;
}