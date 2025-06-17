#include <stdio.h>
int sumEvenNumbers(int nums[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
{
        if (nums[i] % 2 == 0) 
{ 
            sum += nums[i];
        }
    }
    return sum; 
}

int main() 
{
    int nums[] = {1, 2, 3, 4, 5}; 
    int n = sizeof(nums) / sizeof(nums[0]); 
    printf("Sum of even numbers: %d\n", sumEvenNumbers(nums, n));
    return 0;
}
