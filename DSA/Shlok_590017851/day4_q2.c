#include <stdio.h>
void rotateRight(int nums[], int n, int k) 
{
    int rotated[n];
    k = k % n;  
    for (int i = 0; i < n; i++) 
    {
        int newIndex = (i + k) % n;
        rotated[newIndex] = nums[i];
    }
    for (int i = 0; i < n; i++) 
    {
        nums[i] = rotated[i];
    }
}
void printArray(int nums[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    printf("Original array: ");
    printArray(nums, n);
    rotateRight(nums, n, k);
    printf("Array after rotating by %d steps: ", k);
    printArray(nums, n);
    return 0;
}
