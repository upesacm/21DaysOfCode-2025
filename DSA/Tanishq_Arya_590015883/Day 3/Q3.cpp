#include<iostream>
using namespace std;

int secondlargest(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int largest = arr[n - 1];
    int secondLargest = -1;

    for(int i = n - 2; i >= 0; i--){
        if(arr[i] < largest){
            secondLargest = arr[i];
            break;
        }
    }
    return secondLargest;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = secondlargest(arr, n);
    if(result != -1) {
        cout << "The second largest element is: " << result << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}