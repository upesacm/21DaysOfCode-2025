#include <stdio.h>

int square_root(int x) 
{
    if (x == 0 || x == 1) 
    {
        return x;
    }
    
    int left = 1;
    int right = x;
    int result = 0;
    
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        long square = (long)mid * mid;
        
        if (square == x) 
        {
            return mid;
        } 
        else if (square < x) 
        {
            result = mid;
            left = mid + 1;
        } 
        else 
        {
            right = mid - 1;
        }
    }
    
    return result;
}

int main() 
{
    int x;
    
    printf("Enter a positive integer: ");
    if (scanf("%d", &x) != 1 || x < 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    int sqrt_val = square_root(x);
    
    printf("Integer square root: %d\n", sqrt_val);
    
    return 0;
}