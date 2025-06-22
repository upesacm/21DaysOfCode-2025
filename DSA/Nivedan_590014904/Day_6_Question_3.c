#include <stdio.h>
int maxsub(int arr[], int n) {
    int maxlen = 1, currlen = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            currlen++;
            if (currlen > maxlen) {
                maxlen = currlen;
            }
        } else {
            currlen = 1; 
        }
    }
    return maxlen;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result = maxsub(arr, n);
    printf("%d\n", result);
    return 0;
}
