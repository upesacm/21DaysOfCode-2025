#include <stdio.h>

int removeElement(int nums[], int n, int val) 
{
    int i = 0;  

    for (int j = 0; j < n; j++) 
    {
        if (nums[j] != val) 
        {
            nums[i] = nums[j];
            i++;
        }
    }

    return i;  
}

int main() 
{
    int n, val;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Array size must be greater than 0.\n");
        return 1;
    }

    int nums[n];


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }


    printf("Enter the value to remove: ");
    scanf("%d", &val);


    int newLength = removeElement(nums, n, val);


    printf("New length after removal: %d\n", newLength);
    printf("Array after removal: ");
    for (int i = 0; i < newLength; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}
