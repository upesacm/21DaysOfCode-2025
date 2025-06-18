#include <stdio.h>
int main()
{
    int arr[100], N, i;

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < N; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    printf("Modified array:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


