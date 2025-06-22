#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int>&arr){
    int start=1;
    int prev=0;
    while(start<arr.size()){
       if(arr[prev]>=arr[start]){
           return false;
       }
       start++;
       prev++;
    }
    return true;
}


int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  if(check(arr)) cout<<"Yes the array is in increasing order";
  else cout<<"No the array is not in increasing order";


    return 0;
}
