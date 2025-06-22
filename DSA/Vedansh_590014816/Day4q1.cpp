#include <iostream>
#include <vector>
using namespace std;
void getSmallest(vector<int>&arr, int n){
    int smallest=-1;
    for(int i=0;i<n;i++){
    if(arr[i]<smallest) smallest=arr[i];
    }
    cout<<"The smallest element in the array is:"<<" "<<smallest;
}
int main() {

   int n;
   cout<<"Enter the no of elements :"<<" ";
   cin>>n;
   vector<int>arr(n);
  cout<<"Enter the elements for array:"<<" ";
  for(int i=0;i<n;i++) cin>>arr[i];
  getSmallest(arr,n);
}
