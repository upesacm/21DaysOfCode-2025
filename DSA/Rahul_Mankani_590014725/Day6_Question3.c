#include <stdio.h>
#define MAX 100

int longest(int a[], int n) 
{
    int maxLen = 1;
    int currLen = 1;
    for (int i = 1; i < n; i++) 
    {
        if (a[i] == a[i-1] + 1) 
        {
            currLen++;
            if (currLen > maxLen) 
            {
                maxLen = currLen;
            }
        } 
        else 
        {
            currLen = 1;
        }
    }
    return maxLen;
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
    int result = longest(a, n);
    printf("Length of longest consecutive increasing subarray: %d\n", result);
    return 0;
}
