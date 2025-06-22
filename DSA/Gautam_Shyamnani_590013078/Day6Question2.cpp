#include<iostream>
#include<vector>
using namespace std;
bool isincreasing(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i]){
           continue;
        }else{
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>arr={11,13,13,15};
    int n=arr.size();
    if(isincreasing(arr,n)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}
