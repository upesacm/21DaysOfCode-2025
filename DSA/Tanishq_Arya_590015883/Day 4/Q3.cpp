#include <iostream>
using namespace std;

int removeElement(int arr[], int n, int val) {
    int newLength = 0; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != val) {
            arr[newLength] = arr[i];
            newLength++;
        }
    }
    return newLength;
}

int main() {
    int n, val;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the value to remove: ";
    cin >> val;

    int newLength = removeElement(arr, n, val);

    cout << "New length of the array: " << newLength << endl;
    

    return 0;
}