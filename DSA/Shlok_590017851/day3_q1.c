#include <stdio.h>
#define MAX 1000  // Assume values are in the range 0 to 999

int kFrequencyElementSum(int nums[], int n, int k)
{
    int freq[MAX] = {0};   
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        freq[nums[i]]++;
    }
    for(int i = 0; i < MAX; i++) {
        if(freq[i] == k) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    int nums[] = {1, 2, 3, 2, 3, 3, 4, 5, 5};
    int k = 2;
    int n = sizeof(nums) / sizeof(nums[0]);
    int result = kFrequencyElementSum(nums, n, k);
    printf("Sum of elements appearing exactly %d times: %d\n", k, result);
    return 0;
}
