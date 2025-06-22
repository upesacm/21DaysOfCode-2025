#include<stdio.h>
void rotateArray(int nums[], int n, int k) {
    int result[100]; 
    k = k % n; 
    for (int i = 0; i < n; i++) result[(i + k) % n] = nums[i];
    for (int i = 0; i < n; i++) nums[i] = result[i];
}
int main(){
    int nums[] = {1, 2, 3, 4, 5};
    rotateArray(nums, 5, 2); 
    for (int i = 0; i < 5; i++) printf("%d ", nums[i]);
    printf("\n");
}