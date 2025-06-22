#include <iostream>
using namespace std;

void rotate(int arr[], int n, int k) {
    int temp[100];  // make sure it's big enough

    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    rotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
