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
    int first = num[0];
    int last = num[n-1];
    printf("First element: %d\n", first);
    printf("Last element: %d\n", last);
    return 0;
}
