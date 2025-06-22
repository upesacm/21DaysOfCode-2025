#include<iostream>
#include<vector>
using namespace std;
void modifiedarray(vector<int>& arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            arr[i]=0;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>arr={3,-6,-7,5,2,-9};
    int n=arr.size();
    modifiedarray(arr,n);
    return 0;
}
