#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int nums[], int n) 
{
    int left = 0;
    int right = n - 1;
    while (left < right)
      {
        if (nums[left] != nums[right]) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() 
{
    int nums[] = {1, 2, 3, 2, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    if (isPalindrome(nums, n))
    {
        printf("The array is a palindrome.\n");
    } 
    else
    {
        printf("The array is NOT a palindrome.\n");
    }
    return 0;
}
