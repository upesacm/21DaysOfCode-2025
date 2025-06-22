#include<iostream>
#include<vector>
#include<map>
using namespace std;

void sumofK(vector<int>&arr,int n,map<int,int>freq,int k){
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int sum=0;
    for( auto it:freq){
     if(it.second==k){
        sum+=it.first;
     }
    }
    cout<<"Sum of elements appearing exactly" << " "<<k << " times:" << " "<<sum<<endl;
}
int main(){
  map<int, int> freq;  
    int n;
    cout<<"Enter the no of element for array:"<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements for the array:"<< " ";
    for(int i=0;i<n;i++) cin>>arr[i];
    int k;
    cout<<"Enter the value of k:"<< " ";
    cin>>k;
    sumofK(arr,n,freq, k);
}
