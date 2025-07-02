#include <stdio.h>

int integerSquareRoot(int n) 
{
    if (n == 0 || n == 1)
        return n;
    int start = 1, end = n, ans = 0;
    while (start <= end) 
    {
        int mid = start + (end - start) / 2;
        if (mid <= n / mid) 
        {
            ans = mid; 
            start = mid + 1;
        } 
        else 
        {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int result = integerSquareRoot(number);
    printf("Integer square root: %d\n", result);

    return 0;
}
