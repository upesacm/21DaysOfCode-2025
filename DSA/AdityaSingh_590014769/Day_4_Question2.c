/*Rotate Array by k Steps A problem that introduces array manipulation and circular thinking with wraparound scenarios.
 Problem Statement: Given an array nums of size n and an integer k, rotate the array to the right by k steps. Return the rotated array. 
 This problem introduces you to array manipulation and circular thinking,
  teaching you how to handle wraparound scenarios and apply modular arithmetic in practical applications. 
  Your task: Rotate the array to the right by k steps and return the rotated array. 
  Examples Input: nums = [1, 2, 3, 4, 5], k = 2 
  Output: [4, 5, 1, 2, 3] 
  Input: nums = [10, 20, 30],
   k = 4  Output: [30, 10, 20] 
  Input: nums = [1, 2], 
  k = 1 Output: [2, 1]
*/
#include <stdio.h>

void function(int nums[], int n, int k, int rotated[]) 
{
    k = k % n;
    for (int i = 0; i < n; i++) 
    {
        rotated[(i + k) % n] = nums[i];
    }
}

int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], rotated[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    function(nums, n, k, rotated);

    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", rotated[i]);
    }
    printf("\n");

    return 0;
}