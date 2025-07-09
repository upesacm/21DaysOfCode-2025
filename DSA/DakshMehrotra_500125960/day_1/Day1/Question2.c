#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], count[n+1];

    for(i = 0; i <= n; i++) count[i] = 0;

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    int missing = -1, twice = -1;
    for(i = 1; i <= n; i++) 
    {
        if(count[i] == 0)
            missing = i;
        else if(count[i] == 2)
            twice = i;
    }

    printf("Missing: %d, Twice: %d\n", missing, twice);
    return 0;
}