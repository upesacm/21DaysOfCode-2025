#include <stdio.h>

int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) 
    {
        printf("Number %d: ", i+1);
        scanf("%d", &num[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++) 
    {
        if(num[i] % 2 == 0) 
        {
            sum += num[i];
        }
    }
    printf("Sum of even numbers: %d\n", sum);
    return 0;
}
