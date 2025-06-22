#include <stdio.h>
void findMissingAndRepeated(int arr[], int n) {
    int count[n + 1];
    for (int i = 0; i <= n; i++) count[i] = 0;
    for (int i = 0; i < n; i++) count[arr[i]]++;
    int missing = -1, repeated = -1;
    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) missing = i;
        else if (count[i] == 2) repeated = i;
    }
    printf("Missing: %d, Twice: %d\n", missing, repeated);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    findMissingAndRepeated(arr, n);
    return 0;
}
