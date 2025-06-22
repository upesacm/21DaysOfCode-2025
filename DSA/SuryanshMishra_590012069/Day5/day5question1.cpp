#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
void countFreq(vector<int>&arr, int n,unordered_map<int, int> &mpp){
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    cout<<"Elements which occur only once :"<< " ";
    for(auto it:mpp){
        if(it.second==1){
        cout<<it.first<<" ";
        }
    }
 cout<< endl;
}
int main(){
    unordered_map<int, int> mpp;
    int n;
    cout<<"Enter the no of elements:"<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements: "<< " ";
    for(int i=0;i<n;i++) cin>>arr[i];
    countFreq(arr,n,mpp);
    
}