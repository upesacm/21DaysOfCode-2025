#include <stdio.h>
int main() 
{
    int nums[] = {8, 3, 5, 1, 9}, n = 5, min = nums[0];
    for (int i = 1; i < n; i++)
        if (nums[i] < min) min = nums[i];
    printf("%d", min);
    return 0;
}
