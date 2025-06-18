#include <iostream>
#include<vector>
using namespace std;

void getFirstandLast(vector<int>&arr,int n){
    int first=-1,last=-1;
    if(n==1) first= arr[0],last=arr[0];
    for(int i=0;i<n;i++){
     first=arr[0];
     last=arr[n-1];
    }
    cout<<"The first element in the given array is"<<" "<<first;
    cout<<"The last element in the given array is"<<" "<<last;
}

int main(){
    int n;
    cout<<"Enter the no of elements :"<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements :"<< " ";
    for(int i=0;i<n;i++) cin>>arr[i];
    getFirstandLast(arr,n);
}
