#include <iostream>
using namespace std;

void FirstAndLast(int arr[], int n, int &first, int &last) {
    if (n > 0) {
        first = arr[0];
        last = arr[n - 1];
    } else {
        first = last = -1; 
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; 
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int first, last;
    FirstAndLast(arr, n, first, last);

    cout << "First element: " << first << endl;
    cout << "Last element: " << last << endl;

    return 0;
}