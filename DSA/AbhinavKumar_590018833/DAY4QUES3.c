#include <stdio.h>

int removeValue(int nums[], int n, int val) {
    int i = 0;
    for (int j = 0; j < n; j++) {
        if (nums[j] != val) nums[i++] = nums[j];
    }
    return i;
}
int main(){
    int nums[] = {3, 2, 2, 3};
    int newLength = removeValue(nums, 4, 3);  
    printf("New Length: %d\n", newLength);
    for (int i = 0; i < newLength; i++) printf("%d ", nums[i]);
    printf("\n");
    return 0;

}