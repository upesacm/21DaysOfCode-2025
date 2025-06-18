#include <stdio.h>

int main() 
{
    int n;
    
    // Input the size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    // Declaring the array 
    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    
    // Calculating the sum
    int sum = 0;
    for (int i = 0; i < n; i++)
     {
        if (nums[i] % 2 == 0) 
        {  
            // Checking if number is even
            sum += nums[i]; 
        }
    }
    printf("Sum of all even numbers in the array: %d\n", sum);

    free(nums);
    return 0;
}
