#include <stdio.h>
int main() 
{
    int nums[] = {4, 1, 2, 1, 2}, n = 5, unique = 0;
    for (int i = 0; i < n; i++)
        unique ^= nums[i];
    printf("%d", unique);
    return 0;
}
