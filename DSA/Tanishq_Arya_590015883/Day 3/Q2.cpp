#include<iostream>
using namespace std;

bool duplicate(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i - 1]){
            return true;
        }
    }
    return false;

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

    if(duplicate(arr, n)){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}