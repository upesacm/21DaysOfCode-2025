#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // For bool type

// Function to check if array is palindrome
bool isPalindrome(int* nums, int numsSize) 
{
    int left = 0;
    int right = numsSize - 1;
    
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
    int n;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    if (n <= 0) 
    {
        printf("Invalid array size!\n");
        return 1;
    }
    
    int* nums = (int*)malloc(n * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    bool result = isPalindrome(nums, n);
    
    if (result) 
    {
        printf("The array is a palindrome.\n");
    } 
    else 
    {
        printf("The array is NOT a palindrome.\n");
    }
    
    free(nums);
    return 0;
}