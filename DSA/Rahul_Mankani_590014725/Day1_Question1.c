#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int num[n];
    printf("Enter %d numbers: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &num[i]);
    }
    for(int i = 0; i < n; i++) 
    {
        if(num[i] < 0) 
        {
            num[i] = 0;
        }
    }
    printf("Modified array: ");
    for(int i = 0; i < n; i++) 
    {
        printf("%d ", num[i]);
    }
    printf("\n");
    return 0;
}
