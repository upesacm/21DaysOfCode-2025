#include <stdio.h>

int maxConsec(int* arr, int n) {
    if (!n) return 0;
    int max = 1, cur = 1;
    for (int i = 1; i < n; i++) {
        cur = (arr[i] == arr[i-1] + 1) ? cur + 1 : 1;
        if (cur > max) max = cur;
    }
    return max;
}

int main() {
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d\n", maxConsec(arr, n));
    return 0;
}
