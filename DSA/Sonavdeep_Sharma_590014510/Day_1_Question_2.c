#include <stdio.h>
int main() {
    int arr[100], arr2[101] = {0};
    int N, i;

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        arr2[arr[i]]++;
    }

    for (i = 1; i <=N ; i++) {
        if (arr2[i] == 0) {
            printf("Missing: %d\n", i);
        }
        if (arr2[i] == 2) {
            printf("Twice: %d\n", i);
        }
    }

    return 0;
}
