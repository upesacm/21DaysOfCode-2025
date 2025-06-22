#include <stdio.h>

int inc(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] <= arr[i - 1])
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    if(inc(arr, n))
        printf("true\n");
    else
        printf("false\n");
    return 0;
}
