#include <stdio.h>

int main() 
{
    int n, target;
    
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) 
    {
        printf("Invalid size. Size must be a positive integer.\n");
        return 1;
    }
    
    int arr[n];
    
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        if (scanf("%d", &arr[i]) != 1) 
        {
            printf("Invalid input. Please enter integers only.\n");
            return 1;
        }
    }
    
    printf("Enter the target number to count: ");
    if (scanf("%d", &target) != 1) 
    {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            count++;
        }
    }
    
    printf("The target %d appears %d times in the array.\n", target, count);
    
    return 0;
}