#include<iostream>
using namespace std;

int sumofDistinct(int arr[], int n, int k){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int sum = 0, count=1;
    for(int i=1; i<=n; i++){
        if(i < n && arr[i] == arr[i-1]){
            count++;
        } else {
            if(count == k){
                sum += arr[i-1];
            }
            count = 1;
        }
    }
    return sum;
}

int main() {
    int n, k;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;

    int result = sumofDistinct(arr, n, k);
    cout << "Sum of elements that appear exactly " << k << " times: " << result << endl;

    return 0;
}
