#include <stdio.h>

int main() 
{
    int n, val;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if(n <= 0) 
    {
        printf("Array size must be positive.\n");
        return 1;
    }

    printf("Enter the value to remove: ");
    scanf("%d", &val);

    int arr[n];
    int new_len = 0;
    
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) 
    {
        int temp;
        scanf("%d", &temp);
        if(temp != val) 
        {
            arr[new_len++] = temp;
        }
    }

    printf("New array length after removals: %d\n", new_len);
    return 0;
}