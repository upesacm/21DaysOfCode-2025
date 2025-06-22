#include <stdio.h>

void findNum(int arr[], int n) {
    int count[n + 1];  // Create a count array of size n+1 (1-based indexing)

    for (int i = 0; i <= n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    int missing = -1, duplicate = -1;

    for (int i = 1; i <= n; i++) {
        if (count[i] == 0) {
            missing = i;
        } else if (count[i] == 2) {
            duplicate = i;
        }
    }

    printf("Missing: %d, Twice: %d\n", missing, duplicate);
}

int main() {
    int arr1[] = {4,3,6,2,1,1};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    findNum(arr1, n1);

    return 0;
}
