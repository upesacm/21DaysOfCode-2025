#include <stdio.h>
#include <stdbool.h>

bool Palindrome(int arr[], int size) 
{
    for (int i = 0; i < size / 2; i++) 
    {
        if (arr[i] != arr[size - 1 - i]) 
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0) 
    {
        printf("Error: Size must be positive.\n");
        return 1;
    }
    int arr[size];
    printf("Enter %d integers for the array:\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    if (Palindrome(arr, size)) 
    {
        printf("The array is a palindrome.\n");
    } 
    else 
    {
        printf("The array is not a palindrome.\n");
    }
    return 0;
}
