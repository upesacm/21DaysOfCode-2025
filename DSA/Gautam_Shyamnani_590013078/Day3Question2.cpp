#include<iostream>
#include<vector>
using namespace std;
bool duplicatedetection(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}
int main(){
    vector<int>arr={1,2,3,4};
    int n=arr.size();
    if(duplicatedetection(arr,n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
