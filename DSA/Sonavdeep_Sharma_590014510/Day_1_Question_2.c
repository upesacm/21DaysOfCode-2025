#include <stdio.h>

int main() {
    int N;
    printf("Enter number of elements: ");
    scanf("%d", &N);
    int arr[N], arr2[N + 1];
    for (int i = 0; i <= N; i++) {
        arr2[i] = 0;
    }

    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        arr2[arr[i]]++;
    }

    int missing = -1, repeated = -1;
    for (int i = 1; i <= N; i++) {
        if (arr2[i] == 0)
            missing = i;
        else if (arr2[i] == 2)
            repeated = i;
    }

    printf("Missing number: %d\n", missing);
    printf("Repeated number: %d\n", repeated);

    return 0;
}
