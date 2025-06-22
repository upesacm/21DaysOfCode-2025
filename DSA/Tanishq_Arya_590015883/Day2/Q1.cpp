#include<iostream>
using namespace std;

int Sum(int arr[], int n) {  
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  
            sum += arr[i];
        }
    }
    return sum;  
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];  
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = Sum(arr, n);  
    cout << "The sum of even numbers is: " << result << endl;

    return 0;
}
