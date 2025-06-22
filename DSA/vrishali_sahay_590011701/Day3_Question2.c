#include <stdio.h>
#include <stdbool.h>

#define MAX 1000

int main() {
    int n, nums[MAX];
    bool duplicate = false;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter numbers: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(nums[i] == nums[j]) {
                duplicate = true;
                break;
            }
        }
        if(duplicate) break;
    }
    printf(duplicate ? "true\n" : "false\n");
    return 0;
}