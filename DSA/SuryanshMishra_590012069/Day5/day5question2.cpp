#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
void missingNo(vector<int>&arr, int n){
 int  curr_sum=0;
 int size_sum= n*(n+1)/2;
 for(int i=0;i<n;i++){
     curr_sum+=arr[i];
 }
 int missingNo= size_sum-curr_sum;
 if(missingNo) cout<<"The missing number in the array is:"<<" "<<missingNo;   
}
int main(){
    int n;
    cout<<"Enter the no of elements:"<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements: "<< " ";
    for(int i=0;i<n;i++) cin>>arr[i];
    missingNo(arr,n);
    
}