#include <iostream>
using namespace std;

int Number(int nums[], int n) {
    int result = 0;
    for (int i = 0; i < n; ++i) {
        result ^= nums[i];
    }
    return result;
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
    int result = Number(arr, n);
    cout << "The single number in the array is: " << result << endl;
    return 0;
}
