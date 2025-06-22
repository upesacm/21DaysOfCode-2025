#include <iostream>
#include <vector>
using namespace std;
void deletebyVal(vector<int>& arr,int m) {
   for (auto it = arr.begin(); it != arr.end(); ) {
        if (*it == m)
            it = arr.erase(it);  
        else
            ++it;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int m;
    cout<<"Enter the value you want to delete:"<<" ";
    cin>>m;
    deletebyVal(arr,m);
    cout << "The array after deleting the value : ";
    for (int num : arr) cout << num << " ";
}