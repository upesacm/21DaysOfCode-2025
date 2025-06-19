#include <stdio.h>
int main() 
{
    int nums[] = {3, 0, 1}, n = 3, sum = 0;
    for (int i = 0; i < n; i++) sum += nums[i];
    int total = n * (n + 1) / 2;
    printf("%d", total - sum);
    return 0;
}
