#include <stdio.h>
int main() 
{
    int arr[100];
    int N, i, sum = 0;

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

    printf("Sum: %d\n", sum);

    return 0;
}
