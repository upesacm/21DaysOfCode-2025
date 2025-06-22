#include <iostream>
using namespace std;

int min(int arr[], int n) {
    if (n <= 0) return -1; 
    int minVal = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = min(arr, n);
    cout << "Minimum element in the array: " << result << endl;
    

    return 0;
}
