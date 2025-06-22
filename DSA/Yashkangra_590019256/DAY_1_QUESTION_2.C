#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array (1 to %d):\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count[n+1]; 
    for(int i = 0; i <= n; i++) {
        count[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int missing = -1, repeated = -1;
    for(int i = 1; i <= n; i++) {
        if(count[i] == 0) {
            missing = i;
        }
        if(count[i] == 2) {
            repeated = i;
        }
    }

    printf("Missing number: %d\n", missing);
    printf("Repeated number: %d\n", repeated);

    return 0;
}
