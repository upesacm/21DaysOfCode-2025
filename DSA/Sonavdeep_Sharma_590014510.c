#include <stdio.h>
int main() {
    int N;
    printf("Enter number of elements:\n");
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < 0)
          arr[i] = 0;
    }
    printf("Modified array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
