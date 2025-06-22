#include <stdio.h>

int main() 
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    
    int nums[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &nums[i]);
    }
    
    for (int i = 0; i < n; i++) 
    {
        if (nums[i] < 0) 
        {
            nums[i] = 0;
        }
    }
    
    printf("Modified array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}
