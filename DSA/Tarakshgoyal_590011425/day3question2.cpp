#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

bool duplicate(vector<int>&arr,int n){
        unordered_set<int> check;
         for (int num : arr) {
        if (check.count(num)) return true;
        check.insert(num);
    }
    return false; 

}




int main(){
    int n;
    cout<<"Enter the no of element for array:"<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements for the array:"<< " ";
    for(int i=0;i<n;i++) cin>>arr[i];
    
  bool duplicates = duplicate(arr, n);

    if (duplicates)
        cout << "Duplicates found in the array." << endl;
    else
        cout << "No duplicates found in the array." << endl;

    return 0;

}