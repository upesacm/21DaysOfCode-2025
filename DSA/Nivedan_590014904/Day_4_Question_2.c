#include <stdio.h>
void rr(int arr[], int n, int k, int newarr[]) {
    for (int i = 0; i < n; i++) {
        int j = (i + k) % n;
        newarr[j] = arr[i];
    }
}
int main() {
    int n, k;
    printf("Enter number of elements:\n");
    scanf("%d", &n);

    int arr[n], newarr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of steps to rotate right:\n");
    scanf("%d", &k);
    k=k%n;
    rr(arr, n, k, newarr);  
    printf("Rotated array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", newarr[i]);
    }
    return 0;
}
