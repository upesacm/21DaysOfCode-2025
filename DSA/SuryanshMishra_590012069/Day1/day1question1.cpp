#include <iostream>
#include <vector>
using namespace std;
void replaceWithZero( int i, vector<int>&arr){
    while(i<arr.size()){
        if(arr[i]<0){
            arr[i]=0;
        }
        i++;
    }
 for(int j=0;j<arr.size();j++){
 cout<<" "<<arr[j];
 }
}
int main(){
    int n;
    cout<<"Enter the no of elements :"<<" ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the array elements :"<<" ";
    for(int i=0;i<n;i++) cin>>arr[i];
    replaceWithZero( 0, arr);
}