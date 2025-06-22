#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate(int arr[], int n, int k) {
    k = k % n; 
    if (k < 0) {
        k += n; 
    }
    reverse(arr, 0, n - 1); 
    reverse(arr, 0, k - 1); 
    reverse(arr, k, n - 1); 
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number of steps to rotate: ";
    cin >> k;

    rotate(arr, n, k);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}