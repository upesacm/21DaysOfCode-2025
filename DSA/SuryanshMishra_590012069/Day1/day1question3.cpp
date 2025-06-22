#include<iostream>
#include<vector>
using namespace std;
void sumElements(vector<int>&arr){
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    cout<<"The sum of all elements of the array is :"<< " "<<sum;
}
int main(){
    int n;
    cout<<"Enter the  no of elements : "<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements:"<<" ";
    for(int i=0;i<n;i++) cin>>arr[i];
    sumElements(arr);
}