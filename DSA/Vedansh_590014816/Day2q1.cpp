#include <iostream>
#include <vector> 
using namespace std;

void getEvenSum(vector<int>&arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
    if(arr[i]%2==0) sum+=arr[i];
    }
    cout<<"The sum of all the even elemnts is"<<" "<<sum;
}


int main(){
    int n;
    cout<<"Enter the number of elements: "<< " ";
    vector<int>arr(n);
    cout<<"Enter the array elements"<<" ";
    for(int i=0;i<n;i++)cin>>arr[i];
    getEvenSum(arr,n);
}
