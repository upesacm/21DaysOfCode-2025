#include <stdio.h>
#define MAX 100

int incr(int a[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        if (a[i] >= a[i + 1]) 
        {
            return 0;
        }
    }
    return 1;
}
int main() 
{
    int n;
    int a[MAX];
    printf("Enter number of elements (max %d): ", MAX);
    scanf("%d", &n);
    if (n < 1 || n > MAX) 
    {
        printf("Enter a number between 1 and %d.\n", MAX);
        return 1;
    }
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    
    if (incr(a, n)) 
    {
        printf("Array is strictly increasing: true\n");
    } 
    else 
    {
        printf("Array is not strictly increasing: false\n");
    }
    return 0;
}
