#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    int count[n + 1]; 

    
    for(int i = 0; i <= n; i++) 
    {
        count[i] = 0;
    }

    printf("Enter %d numbers (from 1 to %d):\n", n, n);
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      count[arr[i]]++;
    }

    int missing = -1, repeated = -1;

    for(int i = 1; i <= n; i++) 
    {
        if(count[i] == 0)
        missing = i;
        else if(count[i] == 2)
        repeated = i;
    }

printf("Missing: %d, Twice: %d\n", missing, repeated);

    return 0;
}
