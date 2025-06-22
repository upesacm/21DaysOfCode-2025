#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int* nums, int n) 
{
    int i = 0, j = n - 1;
    while (i < j) 
    {
        if (nums[i] != nums[j]) 
        return false;
        i++;
        j--;
    }
    return true;
}

int main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    if (n <= 0) return 1;

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    scanf("%d", &nums[i]);

    if (isPalindrome(nums, n)) 
    printf("true\n");
    else printf("false\n");

    return 0;
}
