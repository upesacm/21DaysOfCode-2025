#include <iostream>
#include <vector>
using namespace std;
void myreverse(vector<int>& arr, int start, int end) {
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int k;
    cout << "Enter the value of k: ";
    cin >> k;
    k = k % n; 
    myreverse(arr, 0, n - 1);     
    myreverse(arr, 0, k - 1);    
    myreverse(arr, k, n - 1);     
    cout << "The array after rotating by k: ";
    for (int num : arr) cout << num << " ";
}